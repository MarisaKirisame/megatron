import datetime
import sys
import os
import dominate
from dominate.tags import *
import subprocess
import json
from common import *
import math
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from matplotlib import font_manager
import numpy as np
from matplotlib.ticker import FuncFormatter, NullFormatter, StrMethodFormatter
FIG_SIZE = 5

font_manager.fontManager.addfont('LinBiolinum_Rah.ttf')
prop = font_manager.FontProperties(fname='LinBiolinum_Rah.ttf')
plt.rcParams['font.family'] = 'sans-serif'
plt.rcParams['font.sans-serif'] = prop.get_name()
plt.rcParams['font.size'] = 13

def tex_string(x):
    return x.replace("_", "")

def get_time():
    return datetime.datetime.now().strftime("%m%d_%H%M%S")

def readlines_file(path):
    with open(path, "r") as f:
        return f.readlines()

out_path = "output/"
os.makedirs(out_path, exist_ok=True)

out_tex = open(out_path + "out.tex", "w")

def output_tex(out):
    out_tex.write(out)

total_diff_count = 0
def new_diff():
    global total_diff_count
    total_diff_count += 1

COUNTER = 0
def count():
    global COUNTER
    ret = COUNTER
    COUNTER += 1
    return ret

class make_doc(dominate.document):
    def _add_to_ctx(self): pass # don't add to contexts

def write_to(path, val):
    with open(path, "w") as f:
        f.write(val)

def string_as_link(text, s, suffix):
    file_path = f"{count()}.{suffix}"
    write_to(out_path + file_path, str(s))
    return a(text, href=file_path)

def anal_property(j, default_count):
    if isinstance(j, dict):
        for k in j:
            if k not in default_count:
                default_count[k] = {}
            if j[k] not in default_count[k]:
                default_count[k][j[k]] = 0
            default_count[k][j[k]] += 1
    else:
        print(j)
        print(type(j))
        raise

def anal(j, default_count):
    if isinstance(j, (str, int)):
        pass
    elif isinstance(j, dict):
        if "properties" in j:
            anal_property(j["properties"], default_count)
        else:
            for k in j:
                anal(j[k], default_count)
    elif isinstance(j, list):
        for c in j:
            anal(c, default_count)
    else:
        print(type(j))
        raise

def strip(j, strip_default):
    if isinstance(j, (str, int)):
        return j
    elif isinstance(j, dict):
        ret = {}
        for k in j:
            if k in strip_default and j[k] == strip_default[k]:
                pass
            else:
                ret[k] = strip(j[k], strip_default)
        return ret
    elif isinstance(j, list):
        return list([strip(c, strip_default) for c in j])
    else:
        print(type(j))
        raise

def default_count_to_strip_default(default_count):
    strip_default = {}
    for k, v in default_count.items():
        max_dv = None
        max_count = None
        for dv, count in v.items():
            if max_count is None or count > max_count:
                max_dv = dv
                max_count = count
        strip_default[k] = max_dv
    return strip_default

def get_time(js):
    for j in js:
        if j["name"] in ["init", "recalculate"]:
            return j["time"]
    return ""

json_htbl = {}

def per_trace(trace_out_path):
    local_json_htbl = {}
    default_count = {}
    j_by_diff = {}
    for l in readlines_file(trace_out_path):
        j = json.loads(l)
        anal(j, default_count)
        header = ["name", "diff_num", "read_count", "write_count", "meta_read_count", "meta_write_count", "queue_size_acc", 
                  "input_change_count", "output_change_count", "tree_size", 
                  "overhead_time", "dirty_time", "queue_time", "om_time", "eval_time", "command", "full_command", "html", "time"]
        diff_num = j["diff_num"]
        if diff_num not in j_by_diff:
            j_by_diff[diff_num] = []
        j_by_diff[diff_num].append(j)
    strip_default = default_count_to_strip_default(default_count)

    doc = make_doc(title=out_path)
    summary = {}
    with doc:
        link(href="https://cdn.jsdelivr.net/gh/tofsjonas/sortable@latest/sortable.min.css", rel="stylesheet")
        script(src="https://cdn.jsdelivr.net/gh/tofsjonas/sortable@latest/sortable.min.js")

        string_as_link("default properties", json.dumps(strip_default), "json")
        with table(border="1", cls="sortable"):
            with thead():
                tr(*[th(h, style="position:sticky;top:0px;") for h in header])
            with tbody():
                for i in range(len(j_by_diff)):
                    for j in j_by_diff[i]:
                        processed = {}
                        processed["html"] = string_as_link("click me", j["html"], "html")
                        processed["command"] = string_as_link("click me", "[" + ",\n".join([json.dumps(strip(c, strip_default)) for c in j["command"]]) + "]", "json")
                        processed["full_command"] = string_as_link("click me", "[" + ",\n".join([json.dumps(c) for c in j["command"]]) + "]", "json")
                        processed["time"] = get_time(j["command"])
                        for k in j.keys():
                            if k not in processed:
                                processed[k] = j[k]
                        tr(*[td(processed[h]) for h in header])
                        name = j["name"]

                        key = trace_out_path + str(j["diff_num"])
                        if key not in json_htbl:
                            json_htbl[key] = {}
                        json_htbl[key][name] = j

                        if key not in local_json_htbl:
                            local_json_htbl[key] = {}
                        local_json_htbl[key][name] = j

                        if name not in summary:
                            summary[name] = {"name": name, "diff_num": "total", "html": "NA", "command": "NA", "full_command": "NA", "time": "NA"}
                        for k in j.keys():
                            if k not in set(["name", "diff_num", "html", "command", "full_command", "time"]):
                                if k not in summary[name]:
                                    summary[name][k] = 0
                                summary[name][k] += j[k]
                for j in summary.values():
                    tr(*[td(j[h]) for h in header])

        run_compare(local_json_htbl)

    page_path = f"{count()}.html"
    write_to(out_path + page_path, str(doc))

    return page_path

def plot_label(x):
    if x == "DB_overhead":
        return "Overhead Cycles for Double Dirty Bit"
    elif x == "PQ_overhead":
        return "Overhead Cycles for Spineless Traversal"
    elif x == "DB_small_overhead":
        return "(Incremental) Overhead Cycles for Double Dirty Bit"
    elif x == "PQ_small_overhead":
        return "(Incremental) Overhead Cycles for Spineless Traversal"
    elif x == "DB_total":
        return "Cycles for Double Dirty Bit"
    elif x == "PQ_total":
        return "Cycles for Spineless Traversal"
    elif x == "DB_small_total":
        return "(Incremental) Cycles for Double Dirty Bit"
    elif x == "PQ_small_total":
        return "(Incremental) Cycles for Spineless Traversal"
    else:
        return x

def plot(xs_name, xs, ys_name, ys, name, *, tex):
    if len(xs) <= 1:
        return

    min_value = min(min(*xs), min(*ys))
    max_value = max(max(*xs), max(*ys))

    ys = [max(ys[i], 1) for i in range(len(ys))]

    speedup = [math.log(xs[i]/ys[i]) for i in range(len(xs))]
    n_clusters = min(4, len(speedup))
    est = KMeans(n_clusters=n_clusters)
    est.fit(np.array(speedup).reshape(-1, 1))
    mp = []
    for nc in range(n_clusters):
        sub = [speedup[i] for i in range(len(speedup)) if est.labels_[i] == nc]
        # (geomean, percentage)
        mp.append((math.exp(sum(sub)/len(sub)), 100 * len(sub)/len(speedup)))
    mp.sort()

    fig, ax1 = plt.subplots(1, 1, layout='constrained')
    fig.set_dpi(300)
    fig.set_figheight(FIG_SIZE)
    fig.set_figwidth(FIG_SIZE)

    def scatterplot():
        for nc in range(n_clusters):
            sub_xs = [xs[i] for i in range(len(speedup)) if est.labels_[i] == nc]
            sub_ys = [ys[i] for i in range(len(speedup)) if est.labels_[i] == nc]
            ax1.scatter(sub_xs, sub_ys, color="#1f77b4", alpha=0.3, edgecolor="none")
        ax1.plot([min_value, max_value], [min_value, max_value], color="black")
        ax1.set_xscale('log')
        ax1.set_yscale('log')
        ax1.set_xlim(min_value / 2, max_value * 2)
        ax1.set_ylim(min_value / 2, max_value * 2)

    scatterplot()

    def histoplot():
        # https://matplotlib.org/stable/users/explain/colors/colormaps.html#colormaps
        # cmap = 'viridis' # purple to yellow
        cmap = 'Blues'
        # cmap = 'bwr'

        ax.grid(False)
        ax.plot([min_value, max_value], [min_value, max_value], color="black")
        ax.set_xscale('log')
        ax.set_yscale('log')
        ax.set_xlim(min_value / 2, max_value * 2)
        ax.set_ylim(min_value / 2, max_value * 2)
        ax.hist2d(xs, ys, bins=(np.geomspace(min_value, max_value, 50), np.geomspace(min_value, max_value, 50)), cmap=cmap)

    ax1.set_xlabel(plot_label(f'{xs_name}_{name}'))
    ax1.set_ylabel(plot_label(f'{ys_name}_{name}'))

    ax1.tick_params(which="major", width=1, length=8)
    ax1.tick_params(which="minor", width=1, length=4)
    pic_path0 = f"{count()}.png"
    fig.savefig(out_path + pic_path0)

    fig, ax2 = plt.subplots(1, 1, layout='constrained')
    fig.set_dpi(300)
    fig.set_figheight(FIG_SIZE)
    fig.set_figwidth(FIG_SIZE)

    cdf_x = sorted([xs[i]/ys[i] for i in range(len(xs))])
    cdf_y = [(i + 1)/len(cdf_x) for i in range(len(cdf_x))]

    pct_slowdown = np.interp(1.0, cdf_x, cdf_y)
    def tex_percentage(x):
        return f"{x * 100:.1f}\\%"
    command_name = "\\" + xs_name + ys_name + name
    if tex and name in ["overhead", "small_overhead", "total", "small_total"]:
        output_tex(f"""\\newcommand{{{tex_string(command_name + "Count")}}}{{{len(xs)}}}\n""")
        output_tex(f"""\\newcommand{{{tex_string(command_name + "pct_slowdown")}}}{{{tex_percentage(pct_slowdown)}}}\n""")
        output_tex(f"""\\newcommand{{{tex_string(command_name + "pct_speedup")}}}{{{tex_percentage(1 - pct_slowdown)}}}\n""")
    ax2.plot(cdf_x, cdf_y)
    ax2.axvline(x=1,c='black',linewidth=0.5)
    ax2.annotate('{:.0f}%'.format(pct_slowdown * 100), xy=(1, pct_slowdown), xytext=(-50, 0), textcoords='offset points', bbox = dict(boxstyle="round", fc="0.8"), arrowprops = dict(arrowstyle="->"))
    x_range = math.exp(max(abs(math.log(max(cdf_x))), abs(math.log(min(cdf_x)))))
    ax2.set_xlim(1/x_range, x_range)
    ax2.set_xscale('log')
    def cdf_xlabel(x):
        if x == "DB_overhead":
            return "(Overhead) Speed of Spineless Traversal over Double Dirty Bit"
        elif x == "DB_small_overhead":
            return "(Incremental) (Overhead) Speed of Spineless Traversal over Double Dirty Bit"
        elif x == "DB_total":
            return "Speed of Spineless Traversal over Double Dirty Bit"
        elif x == "DB_small_total":
            return "(Incremental) Speed of Spineless Traversal over Double Dirty Bit"
        else:
            return x
    ax2.set_xlabel(cdf_xlabel(f'{xs_name}_{name}'))
    ax2.set_ylabel("Percentage")
    ax2.yaxis.set_major_formatter(FuncFormatter(lambda x, pos: "{:.0f}%".format(x * 100)))
    ax2.yaxis.set_minor_formatter(NullFormatter())
    ax2.tick_params(which="major", width=1, length=8)
    ax2.tick_params(which="minor", width=1, length=4)
    pic_path1 = f"{count()}.png"
    fig.savefig(out_path + pic_path1)

    plt.close()

    with div(style="display:flex"):
        img(src=pic_path0)
        img(src=pic_path1)

        def make_table(title, mp):
            with table(border="1", style="display:inline-table"):
                caption(title)
                with thead():
                    tr(td("fraction"), td("geomean"))
                with tbody():
                    for geomean, percentage in mp:
                        tr(td(f"{percentage:.2f}"), td(f"{geomean:.2f}"))
                    total = f"{math.exp(sum(speedup)/len(speedup)):.2f}"
                    tr(td("total"), td(total))
                if tex and title == "clustering":
                    command_name = "\\" + xs_name + ys_name + name
                    output_tex(f"\\newcommand{{{tex_string(command_name)}}}{{{total}}}\n")

        def geomean(points):
            speedup = list([math.log(x/y) for x, y in points])
            return math.exp(sum(speedup)/len(speedup)) if len(speedup) > 0 else 1

        def points_to_mp(points):
            points = list([list(l) for l in points])
            total_size = sum(len(l) for l in points)
            return [(geomean(ps), 100 * len(ps)/total_size)for ps in points]

        make_table("clustering", mp)
        make_table("slowdown:speedup", points_to_mp([[(xs[i], ys[i]) for i in range(len(xs)) if xs[i] <= ys[i]], [(xs[i], ys[i]) for i in range(len(xs)) if xs[i] > ys[i]]]))
        make_table(">1e6:<=1e6", points_to_mp([[(xs[i], ys[i]) for i in range(len(xs)) if xs[i] > 1e6], [(xs[i], ys[i]) for i in range(len(xs)) if xs[i] <= 1e6]]))

        # img(src=pic_path2)

        span(f"arithmean={sum(xs)/sum(ys):.2f}")

def compare(json_htbl, x_name, y_name, *, prefix="", predicate=(lambda v: True), tex):
    xs = []
    ys = []

    tree_size = []
    db_meta_read = []
    pq_meta_read = []

    for v in json_htbl.keys():
        if json_htbl[v][f"{y_name}_D"]["eval_time"] != 0 and predicate(v):
            x = json_htbl[v][f"{x_name}_D"]["overhead_time"]
            y = json_htbl[v][f"{y_name}_D"]["overhead_time"]
            xs.append(x)
            ys.append(y)
            if x_name == "DB" and y_name == "PQ":
                tree_size.append(json_htbl[v]["DB_D"]["tree_size"])
                db_meta_read.append(json_htbl[v]["DB_D"]["meta_read_count"])
                pq_meta_read.append(json_htbl[v]["PQ_D"]["meta_read_count"])
    plot(x_name, xs, y_name, ys, prefix+"overhead", tex=tex)

    xs = []
    ys = []
    for v in json_htbl.keys():
        if json_htbl[v][f"{y_name}_D"]["eval_time"] != 0 and predicate(v):
            x = json_htbl[v][f"{x_name}_D"]["eval_time"]
            y = json_htbl[v][f"{y_name}_D"]["eval_time"]
            xs.append(x)
            ys.append(y)
    plot(x_name, xs, y_name, ys, prefix+"eval", tex=tex)

    xs = []
    ys = []
    for v in json_htbl.keys():
        if json_htbl[v][f"{y_name}_D"]["eval_time"] != 0 and predicate(v):
            x = json_htbl[v][f"{x_name}_D"]["overhead_time"] + json_htbl[v][f"{x_name}_D"]["eval_time"]
            y = json_htbl[v][f"{y_name}_D"]["overhead_time"] + json_htbl[v][f"{y_name}_D"]["eval_time"]
            xs.append(x)
            ys.append(y)
    plot(x_name, xs, y_name, ys, prefix+"total", tex=tex)

    if x_name == "DB" and y_name == "PQ" and len(db_meta_read) >= 1 and len(pq_meta_read) >= 1:
        hist(tree_size, [1,2,5,10,20,50,100,200,500,1000,2000,5000,10000,20000], "Tree Size")
        hist(db_meta_read, [1,2,5,10,20,50,100,200,500,1000, 2000], "Number of Nodes Accessed by Double Dirty Bit")
        hist(pq_meta_read, [1,2,5,10,20,50,100,200,500,1000, 2000], "Number of Nodes Accessed by Spineless Traversal")
        hist2(db_meta_read, pq_meta_read, "Number of Nodes Accessed", "Double Dirty Bit", "Spineless Traversal")

        fig, ax = plt.subplots()

        # a histogram returns 3 objects : n (i.e. frequncies), bins, patches
        freq, bins, patches = ax.hist((pq_meta_read, db_meta_read),
                                      bins=np.geomspace(1, max(db_meta_read + pq_meta_read), 10).tolist(),
                                      edgecolor='black',
                                      label=["Spineless Traversal", "Double Dirty Bit"])
        ax.set_xticks(bins)
        ax.set_xscale("log")

        ax.xaxis.set_major_formatter(StrMethodFormatter('{x:.0f}'))
        ax.xaxis.set_minor_formatter(NullFormatter())

        pic_path = f"{count()}.png"
        ax.set_xlabel("Number of Nodes Accessed")
        ax.legend(loc="upper right")
        plt.savefig(out_path + pic_path)
        plt.close()
        img(src=pic_path)


def run_compare(json_htbl, *, tex=False):
    # compare("NE", "DB")
    # compare("NE", "PQ")
    compare(json_htbl, "DB", "PQ", tex=tex)
    def is_small(v):
        tree_size = json_htbl[v]["PQ_D"]["tree_size"]
        meta_read_count = json_htbl[v]["PQ_D"]["meta_read_count"]
        return meta_read_count * 100 < tree_size * 3

    compare(json_htbl, "DB", "PQ", prefix="small_", predicate=is_small, tex=tex)
    compare(json_htbl, "DB", "PQ", prefix="large_", predicate=(lambda v: not is_small(v)), tex=tex)

def hist2(xs1, xs2, xlabel, label1, label2):
    if len(xs1) == 0:
        return

    if len(xs2) == 0:
        return
    
    fig, ax = plt.subplots(layout='constrained')
    bins = np.geomspace(1, max(max(xs1), max(xs2)), 10)
    (heights1, _) = np.histogram(xs1, bins=bins)
    (heights2, _) = np.histogram(xs2, bins=bins)
    ax.set_xscale('log')
    ax.bar(bins[:-1], heights1, np.diff(bins) * 0.9, align='edge', edgecolor='black', color=(0.8, 0.1, 0.1, 0.3), label=label1)
    ax.bar(bins[1:], heights2, -np.diff(bins) * 0.95, align='edge', edgecolor='black', color=(0.1, 0.8, 0.1, 0.3), label=label2)
    ax.set_xlabel(xlabel)
    ax.xaxis.set_major_formatter(StrMethodFormatter('{x:.0f}'))
    ax.xaxis.set_minor_formatter(NullFormatter())
    ax.legend()
    pic_path = f"{count()}.png"
    plt.savefig(out_path + pic_path)
    plt.close()
    img(src=pic_path)

def hist(xs, bins, label):
    if len(xs) == 0:
        return

    fig, ax = plt.subplots()

    # a histogram returns 3 objects : n (i.e. frequncies), bins, patches
    freq, bins, patches = ax.hist(xs, bins=np.geomspace(1, max(xs), 10).tolist(), edgecolor='black')
    ax.set_xticks(bins)
    ax.set_xscale("log")

    from matplotlib.ticker import StrMethodFormatter, NullFormatter
    ax.xaxis.set_major_formatter(StrMethodFormatter('{x:.0f}'))
    ax.xaxis.set_minor_formatter(NullFormatter())

    ax.set_xlabel(label)

    fig.set_dpi(300)
    ax.tick_params(which="major", width=1, length=8)
    ax.tick_params(which="minor", width=1, length=4)
    fig.set_figheight(FIG_SIZE)
    fig.set_figwidth(FIG_SIZE)

    pic_path = f"{count()}.png"
    plt.savefig(out_path + pic_path, bbox_inches='tight')
    plt.close()
    img(src=pic_path)

doc = make_doc(title=out_path)
with doc:
    a("out.tex", href="out.tex")
    for t in trace_list:
        a(t, href=per_trace(t+".out"))
        br()

    run_compare(json_htbl, tex=True)

for v in json_htbl.keys():
    if json_htbl[v][f"PQ_D"]["eval_time"] != 0:
        new_diff()

write_to(out_path + "index.html", str(doc))
output_tex(f"\\newcommand{{\\TotalDiffCount}}{{{total_diff_count}}}\n")
output_tex(f"\\newcommand{{\\TotalTraceCount}}{{{len(trace_list)}}}\n")

if "--no-open" not in sys.argv:
    subprocess.run(f"xdg-open {out_path}/index.html", shell=True, check=True)
