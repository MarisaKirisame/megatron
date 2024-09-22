import json
import sys
from common import *

TOTAL_DIFF_SIZE = 0
TOTAL_SIZE = 0

def report_diff(x):
    global TOTAL_DIFF_SIZE
    TOTAL_DIFF_SIZE += size(x)

trace_path = sys.argv[1]

output = open("command.json", "w")
def out(x):
    output.write(json.dumps(x) + "\n")    

def diff_simple_dict(l_dict, r_dict, path, on, type_):
    for k in l_dict.keys():
        if k in r_dict:
            if l_dict[k] != r_dict[k]:
                out(command_replace_value(path, on, type_, k, l_dict[k], r_dict[k]))
        else:
            out(command_delete_value(path, on, type_, k, l_dict[k]))
    for k in r_dict.keys():
        if k not in l_dict:
            out(command_insert_value(path, on, type_, k, r_dict[k]))

# tree diffing is very hard.
# one possible road is to use difftastic, but conversion between our stuff and theirs is also very hard.
# luckily the diffs is pretty trivial, and we have id to rematch trees.
def diff_dom_tree(lhs, rhs, path):
    if lhs["id"] != rhs["id"]:
        report_diff(rhs)
        out(command_replace(path, lhs, rhs))
    else:
        if lhs["attributes"] != rhs["attributes"]:
            diff_simple_dict(lhs["attributes"], rhs["attributes"], path, str(lhs)[:120], "attributes")
        if lhs["properties"] != rhs["properties"]:
            diff_simple_dict(lhs["properties"], rhs["properties"], path, str(lhs)[:120], "properties")
        l_children = lhs["children"]
        r_children = rhs["children"]

        l_ids = list(x["id"] for x in l_children)
        r_ids = list(x["id"] for x in r_children)
        unused_l_i = 0
        # invariant: elements with indexe before r_i have been fixed.
        # fixing them consume everything before unused_l_id.
        for r_i in range(len(r_ids)):
            r_id = r_ids[r_i]
            found = False
            for l_i in range(unused_l_i, len(l_ids)):
                if l_ids[l_i] == r_id:
                    assert not found
                    for x in range(l_i - unused_l_i):
                        out(command_remove(path + [r_i], l_children[unused_l_i + x]))
                    diff_dom_tree(l_children[l_i], r_children[r_i], path + [r_i])
                    unused_l_i = l_i + 1
                    found = True
                    break
            if not found:
                out(command_add(path + [r_i], r_children[r_i]))                

def layout_info(node):
    key = ["type", "x", "y", "width", "height"]
    return {k: node[k] for k in key}

def diff_layout_tree(lhs, rhs, path):
    if layout_info(lhs) != layout_info(rhs):
        out(command_layout_info_changed(path, layout_info(lhs), layout_info(rhs)))
    l_children = lhs["children"]
    r_children = rhs["children"]
    if len(l_children) > len(r_children):
        extra = list(l_children[len(r_children):])
        for i in range(len(extra)):
            out(command_layout_remove(path + [len(l_children) - 1 - i], l_children[len(l_children) - 1 - i]))
    elif len(l_children) < len(r_children):
        extra = list(r_children[len(l_children):])
        for i in range(len(extra)):
            out(command_layout_add(path + [len(l_children) + i], extra[i]))
    for i in range(min(len(l_children), len(r_children))):
        diff_layout_tree(l_children[i], r_children[i], path + [i])
    
def semantic_check(j):
    enforce_unique_id(j, set())

def enforce_unique_id(j, s):
    assert j["id"] not in s
    s.add(j["id"])
    for c in j["children"]:
        enforce_unique_id(c, s)
    
with open(trace_path) as f:
    dom_tree_old = None
    layout_tree_old = None
    for l in f.readlines():
        j = json.loads(l)
        dom_tree = regularize_dom(j["dom_tree"])
        layout_tree = regularize_layout(j["layout_tree"])
        semantic_check(dom_tree)
        TOTAL_SIZE += size(dom_tree)
        if dom_tree_old is None:
            assert layout_tree_old is None
            out(command_init(dom_tree, j["time"]))
            out(command_layout_init(layout_tree))
        else:
            assert layout_tree_old is not None
            diff_dom_tree(dom_tree_old, dom_tree, [])
            diff_layout_tree(layout_tree_old, layout_tree, [])
            out(command_recalculate(j["time"]))
        dom_tree_old = dom_tree
        layout_tree_old = layout_tree

print((TOTAL_DIFF_SIZE, TOTAL_SIZE))
