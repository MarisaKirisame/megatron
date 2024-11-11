import json

def total_size(j):
    if "children" not in j:
        return 1
    else:
        s = 0
        for c in j["children"]:
            s += total_size(c)
        return s + 1

def max_depth(j):
    if "children" not in j:
        return 1
    else:
        s = 0
        for c in j["children"]:
            s = max(s, max_depth(c))
        return s + 1

def max_children(j):
    if "children" not in j:
        return 0
    else:
        s = 0
        for c in j["children"]:
            s = max(s, max_children(c))
        return max(s, len(j["children"]))

def max_spine_plus_1(max_s, s, j):
    if "children" not in j:
        max_s[0] = max(max_s[0], s + 1)
    else:
        cur_s = s + len(j["children"])
        for c in j["children"]:
            max_spine_plus_1(max_s, cur_s, c)

COUNTER = 0
def count():
    global COUNTER
    ret = COUNTER
    COUNTER += 1
    return ret

with open('archive.trace') as f:
    for l in f.readlines():
        j = json.loads(l)
        print(f'===================== #{count()} =====================')
        print(f'Total Size   : {total_size(j['dom_tree'])}')
        print(f'Max Depth    : {max_depth(j['dom_tree'])}')
        print(f'Max Children : {max_children(j['dom_tree'])}')
        r = [0]
        max_spine_plus_1(r, 0, j['dom_tree'])
        print(f'Max Spine+1  : {r[0]}')
