import datetime
import os
import dominate
from dominate.tags import *
import subprocess
import json

def get_time():
    return datetime.datetime.now().strftime("%m%d_%H%M%S")

def readlines_file(path):
    with open(path, "r") as f:
        return f.readlines()

out_dir = get_time()
out_path = "output/" + out_dir
os.makedirs(out_path)

class make_doc(dominate.document):
    def _add_to_ctx(self): pass # don't add to contexts


for l in readlines_file("out.json"):
    j = json.loads(l)
    header = list(j.keys())

doc = make_doc(title=out_path)
with doc:
    with table(border="1"):
        with thead():
            tr(*[td(h) for h in header])
        with tbody():
            for l in readlines_file("out.json"):
                j = json.loads(l)
                tr(*[td(j[h]) for h in header])

def write_to(path, val):
    with open(path, "w") as f:
        f.write(val)

write_to(out_path + "/index.html", str(doc))

if subprocess.run("command -v nightly-results", shell=True).returncode == 0:
    subprocess.run(f"""nightly-results publish {out_path}""", shell=True, check=True)
else:
    subprocess.run(f"xdg-open {out_path}/index.html", shell=True, check=True)
