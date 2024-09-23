# path is a list of int.
def command_init(node, time):
    return { "name": "init", "node": node, "time": time }

def command_layout_init(node):
    return { "name": "layout_init", "node": node }

def command_recalculate(time):
    return { "name": "recalculate", "time": time }

def command_add(path, node):
    return { "name": "add", "path": path, "node": node }

def command_remove(path, old_node):
    return { "name": "remove", "path": path, "old_node": old_node }

def command_layout_add(path, node):
    return { "name": "layout_add", "path": path, "node": node }

def command_layout_remove(path, old_node):
    return { "name": "layout_remove", "path": path, "old_node": old_node }

def command_replace(path, old_node, node):
    return { "name": "replace", "path": path, "old_node": old_node, "node": node }

def command_layout_replace(path, old_node, node):
    return { "name": "layout_replace", "path": path, "old_node": old_node, "node": node }

def command_replace_value(path, on, type_, k, old_value, v):
    return { "name": "replace_value", "path": path, "on": on, "type": type_, "key": k, "old_value": old_value, "value": v }

def command_insert_value(path, on, type_, k, v):
    return { "name": "insert_value", "path": path, "on": on, "type": type_, "key": k, "value": v }

def command_delete_value(path, on, type_, k, old_value):
    return { "name": "delete_value", "path": path, "on": on, "type": type_, "key": k, "old_value": old_value }

def command_layout_info_changed(path, old, new):
    return { "name": "layout_info_changed", "path": path, "old": old, "new": new }

def size(j):
    ret = 1
    for c in j["children"]:
        ret += size(c)
    return ret

def regularize_dom(j):
    if "id" not in j:
        return None
    elif j["name"] == "#comment":
        return None
    elif j["name"] == "#doctype":
        return None
    else:
        if "children" not in j:
            j["children"] = []
        tmp = []
        for c in j["children"]:
            c = regularize_dom(c)
            if c is not None:
                tmp.append(c)
        j["children"] = tmp

        if "attributes" not in j:
            j["attributes"] = {}

        if "properties" not in j:
            j["properties"] = {}

        return j

def regularize_layout(j):
    if "children" not in j:
        j["children"] = []
    tmp = []
    for c in j["children"]:
        c = regularize_layout(c)
        tmp.append(c)
    j["children"] = tmp

    if "x" not in j:
        j["x"] = 0
    if "y" not in j:
        j["y"] = 0
    if "width" not in j:
        j["width"] = 0
    if "height" not in j:
        j["height"] = 0
    return j

trace_list = []
#trace_list.append("aliyun")
#trace_list.append("amazon")
trace_list.append("anydesk")
trace_list.append("apple")
trace_list.append("archive")
trace_list.append("arxiv")
trace_list.append("bananaspace")
trace_list.append("bilibili")
trace_list.append("booking")
trace_list.append("chess")
trace_list.append("coursera")
trace_list.append("cppreference")
trace_list.append("discord_nologin")
trace_list.append("espn")
trace_list.append("expedia")
trace_list.append("firefox")
trace_list.append("github_commits")
trace_list.append("github_nologin")
trace_list.append("github_repo")
trace_list.append("gmail_nologin")
trace_list.append("google_hover")
trace_list.append("google_play")
trace_list.append("google_scholar")
trace_list.append("google_searchbar")
trace_list.append("google_searchpage")
trace_list.append("googlesource_chromium")
trace_list.append("haskell")
trace_list.append("hn_type")
trace_list.append("hsr")
trace_list.append("hsreplay")
trace_list.append("janestreet_main")
trace_list.append("jetbrains")
trace_list.append("lichess_anal")
trace_list.append("mihoyo")
trace_list.append("ocaml")
trace_list.append("panda_express")
trace_list.append("reddit")
trace_list.append("spotify")
trace_list.append("stackoverflow_main")
trace_list.append("steam")
trace_list.append("twitter_login")
trace_list.append("twitter_main")
trace_list.append("vscode")
trace_list.append("walmart")
trace_list.append("w3school")
trace_list.append("wikipedia_hover")
trace_list.append("wikipedia_idle")
trace_list.append("windows")
trace_list.append("yahoo")
trace_list.append("youtube")









