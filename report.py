import datetime
import os
import dominate
from dominate.tags import *
import subprocess
import json
from common import *

def get_time():
    return datetime.datetime.now().strftime("%m%d_%H%M%S")

def readlines_file(path):
    with open(path, "r") as f:
        return f.readlines()

out_dir = get_time()
out_path = "output/" + out_dir + "/"
os.makedirs(out_path)

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
  
def per_trace(trace_out_path):
    default_count = {}
    j_by_diff = {}
    for l in readlines_file(trace_out_path):
        j = json.loads(l)
        anal(j, default_count)
        header = ["name", "diff_num", "read_count", "write_count", "meta_read_count", "meta_write_count", "queue_size_acc", "input_change_count", "output_change_count", "overhead_time", "eval_time", "command", "full_command", "html", "time"]
        diff_num = j["diff_num"]
        if diff_num not in j_by_diff:
            j_by_diff[diff_num] = []
        j_by_diff[diff_num].append(j)
    strip_default = default_count_to_strip_default(default_count)
        
    doc = make_doc(title=out_path)
    summary = {}
    with doc:
        string_as_link("default properties", json.dumps(strip_default), "json")
        with table(border="1"):
            with thead():                   
                tr(*[td(h) for h in header])
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
                        if name not in summary:
                            summary[name] = {"name": name, "diff_num": "total", "html": "NA", "command": "NA", "full_command": "NA", "time": "NA"}
                        for k in j.keys():
                            if k not in set(["name", "diff_num", "html", "command", "full_command", "time"]):
                                if k not in summary[name]:
                                    summary[name][k] = 0
                                summary[name][k] += j[k]
                for j in summary.values():
                    tr(*[td(j[h]) for h in header])

    page_path = f"{count()}.html"
    write_to(out_path + page_path, str(doc))
    return page_path

outs = ["google_hover.out", "google_searchbar.out", "google_searchpage.out", "github_nologin.out", "wikipedia_idle.out", "wikipedia_hover.out", "hn_type.out", "espn.out", "discord_nologin.out"]
doc = make_doc(title=out_path)
with doc:
    for o in outs:
        a(o, href=per_trace(o))
        br()
print(doc)
write_to(out_path + "index.html", str(doc))

if subprocess.run("command -v nightly-results", shell=True).returncode == 0:
    subprocess.run(f"""nightly-results publish {out_path}""", shell=True, check=True)
else:
    subprocess.run(f"xdg-open {out_path}/index.html", shell=True, check=True)
