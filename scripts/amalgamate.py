#!/usr/bin/env python3

import sys
import re


def amalgamate(headers, header_name):
    if header_name in headers:
        return

    headers.add(header_name)

    with open(header_name) as f:
        content = f.read()

    for line in content.splitlines():
        match = re.search("#include <(.+)>", line)

        if match is None:
            output_f.write(f"{line}\n")
        else:
            amalgamate(headers, f"include/{match[1]}")


output_file_name = sys.argv[1]

with open(output_file_name, "w") as output_f:
    headers = set()
    amalgamate(headers, "include/epilepsy.h")

print("Done!")
