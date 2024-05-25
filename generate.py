import json

# the four command: init, recalculate, add, remove.
# path is a list of int.
def command_init(node):
    return { "name": "init", "node": node }

def command_recalculate():
    return { "name": "recalculate" }

def command_add(path, node):
    return { "name": "add", "path": path, "node": node }

def command_remove(path):
    return { "name": "remove", "path": path }

def command_replace(path, node):
    return { "name": "replace", "path": path, "node": node }

def size(j):
    ret = 1
    for c in j["children"]:
        ret += size(c)
    return ret

def regularize(j):
    if "id" not in j:
        return None
    else:
        if "children" not in j:
            j["children"] = []
        tmp = []
        for c in j["children"]:
            c = regularize(c)
            if c is not None:
                tmp.append(c)
        j["children"] = tmp

        if "attributes" not in j:
            j["attributes"] = {}

        if "properties" not in j:
            j["properties"] = {}
        
        return j

TOTAL_DIFF_SIZE = 0
TOTAL_SIZE = 0

def report_diff(x):
    global TOTAL_DIFF_SIZE
    TOTAL_DIFF_SIZE += size(x)

output = open("command.json", "w")
def out(x):
    output.write(json.dumps(x) + "\n")    

def diff_simple_dict(l_dict, r_dict):
    assert list(l_dict.keys()) == list(r_dict.keys())
    for k in l_dict.keys():
        if l_dict[k] != r_dict[k]:
            print(k, l_dict[k], r_dict[k])

def diff(lhs, rhs, path):
    if lhs["id"] != rhs["id"]:
        report_diff(rhs)
        out(command_replace(path, rhs))
    else:
        if lhs["attributes"] != rhs["attributes"]:
            diff_simple_dict(lhs["attributes"], rhs["attributes"])
        if lhs["properties"] != rhs["properties"]:
            diff_simple_dict(lhs["properties"], rhs["properties"])
        l_children = lhs["children"]
        r_children = rhs["children"]
        for i in range(min(len(l_children), len(r_children))):
            diff(l_children[i], r_children[i], path + [i])
        if len(l_children) > len(r_children): 
            extra = list(l_children[len(r_children):])
            for i in range(len(extra)):
                out(command_remove(path + [len(l_children) - 1 - i]))
        elif len(l_children) < len(r_children):
            extra = list(r_children[len(l_children):])
            for i in range(len(extra)):
                out(command_add(path + [len(l_children) + i], extra[i]))
                report_diff(extra[i])

def semantic_check(j):
    enforce_unique_id(j, set())

def enforce_unique_id(j, s):
    assert j["id"] not in s
    s.add(j["id"])
    for c in j["children"]:
        enforce_unique_id(c, s)
    
with open("google_haskell.trace") as f:
    j_old = None
    for l in f.readlines():
        lhs, rhs = l.split(",", 1)
        j = regularize(json.loads(rhs))
        semantic_check(j)
        TOTAL_SIZE += size(j)
        if j_old is None:
            out(command_init(j))
        else:
            diff(j_old, j, [])
            out(command_recalculate())
        j_old = j

print((TOTAL_DIFF_SIZE, TOTAL_SIZE))
