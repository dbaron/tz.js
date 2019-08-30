#!/usr/bin/env python

import json
import os
import sys
import shutil

INPUT_DIR = os.path.abspath(os.path.dirname(sys.argv[0]))
OUTPUT_DIR = os.path.join(INPUT_DIR, "output")
DATA_JSON = os.path.join(OUTPUT_DIR, "data.json")
INPUT_CPP = os.path.join(INPUT_DIR, "tzcpp.cpp.in")
OUTPUT_CPP = os.path.join(OUTPUT_DIR, "tzcpp.cpp")
INPUT_H = os.path.join(INPUT_DIR, "tzcpp.h")
OUTPUT_H = os.path.join(OUTPUT_DIR, "tzcpp.h")

def build_cpp(version, tz_version, zones, links):
    # Process zones
    zones_list = []
    rules_list = []
    db_list = []
    for nm, zone in zones.items():
        rules_begin = len(rules_list)
        begin = len(zones_list)
        for t in zone["types"]:
            rules_list.append('            { %d, "%s", %s },' % (t["o"], t["a"], str(t["d"]).lower()) )
        for idx, t in zip(zone["ltidx"], zone["times"]):
            zones_list.append('            { %d, %d },' % (idx + rules_begin, t))
        db_list.append('            { "%s", { %d, %d, "%s" }},' % (nm, begin, len(zones_list), zone["rule"]))

    with open(INPUT_CPP, "rb") as cpp_in:
        cpp_in_source = cpp_in.read()
    cpp_in_source = cpp_in_source.replace("// @ZONE_RULES@", "\n".join(rules_list))
    cpp_in_source = cpp_in_source.replace("// @ZONES@", "\n".join(zones_list))
    cpp_in_source = cpp_in_source.replace("// @DATABASE@", "\n".join(db_list))
    cpp_in_source = cpp_in_source.replace("// @LINKS@", "\n".join([ '            { "%s", "%s" },' % (k, v) for k, v in links.items() ]))
    cpp_in_source = cpp_in_source.replace("@VERSION@", version)
    cpp_in_source = cpp_in_source.replace("@DATA_VERSION@", tz_version)

    return cpp_in_source

if __name__ == '__main__':
    data_json = json.load(sys.stdin)

    links = data_json["links"]
    zones = data_json["zones"]
    version = data_json["version"]
    tz_version = data_json["tzversion"]

    cpp_source = build_cpp(version, tz_version, zones, links)

    with open(OUTPUT_CPP, "wb") as cpp_out:
        cpp_out.write(cpp_source)
    shutil.copy(INPUT_H, OUTPUT_H)

