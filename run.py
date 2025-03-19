from common import *
import subprocess
import sys

mode = "default"
if len(sys.argv) >= 2:
    mode = sys.argv[1]
    if mode == "small-ae":
        trace_list = ["google_searchpage"]

def shell(str):
    subprocess.run(str, shell=True, check=True)

def process(name):
    print(f"processing {name}...", flush=True)
    shell(f"tar -xf {name}.tar.xz")
    shell(f"python3 generate.py {name}.trace")
    shell(f"dune exec megatron -- {name}.out")

def clean():
    shell("rm Layout*.cpp || true")
    shell("rm *.out || true")
    shell("rm *.trace || true")

clean()

for t in trace_list:
    process(t)

shell(f"python3 report.py {mode}")
#clean()
