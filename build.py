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

tzdata_revision_proc = subprocess.Popen(["dpkg-query", "--show",
                                         "--showformat=${Version}\n", "tzdata"],
                                         stdout=subprocess.PIPE)
tzdata_revision = tzdata_revision_proc.stdout.read()
tzdata_revision_proc.stdout.close()
tzdata_revision = tzdata_revision.partition("-")[0]

tz_json_module = imp.load_source("compiled_to_json",
                                 os.path.join(INPUT_DIR,
                                              "compiled-to-json.py"))
tz_json = tz_json_module.json_zones()

tz_js_in = open(os.path.join(INPUT_DIR, "tz.js.in"), "rb")
tz_js_source = tz_js_in.read()
tz_js_in.close()

tz_js_source = tz_js_source.replace("@@REVISION@@", revision)
tz_js_source = tz_js_source.replace("@@TZDATA_REVISION@@", tzdata_revision)
tz_js_source = tz_js_source.replace("@@ZONES@@", tz_json)

tz_js_gz = gzip.open(os.path.join(OUTPUT_DIR, "tz.js.gz"), "wb")
tz_js_gz.write(tz_js_source)
tz_js_gz.close()

tz_js = open(os.path.join(OUTPUT_DIR, "tz.js"), "wb")
tz_js.write(tz_js_source)
tz_js.close()

tz_tests_module = imp.load_source("tz_test_generator",
                                  os.path.join(INPUT_DIR,
                                               "build-tests.py"))
tests_io = open(os.path.join(OUTPUT_DIR, "test-tz.html"), "wb")
tz_tests_module.output_tests(tests_io)
tests_io.close()
