#!/usr/bin/python

import os
import os.path
import shutil
import subprocess
import gzip
import imp

INPUT_DIR = os.path.dirname(__file__)
OUTPUT_DIR = os.path.join(INPUT_DIR, "output")

shutil.rmtree(OUTPUT_DIR)
os.mkdir(OUTPUT_DIR)

revision_proc = subprocess.Popen(["git", "log", "--format=oneline", "HEAD"],
                                 cwd=INPUT_DIR,
                                 stdout=subprocess.PIPE)
revision = revision_proc.stdout.read(40)
revision_proc.stdout.close()

tz_json_module = imp.load_source("compiled_to_json",
                                 os.path.join(INPUT_DIR,
                                              "compiled-to-json.py"))
tz_json = tz_json_module.json_zones()

tz_js_in = open(os.path.join(INPUT_DIR, "tz.js.in"), "rb")
tz_js_source = tz_js_in.read()
tz_js_in.close()

tz_js_source = tz_js_source.replace("@@REVISION@@", revision)
tz_js_source = tz_js_source.replace("@@ZONES@@", tz_json)

tz_js = gzip.open(os.path.join(OUTPUT_DIR, "tz.js.gz"), "wb")
tz_js.write(tz_js_source)
tz_js.close()
