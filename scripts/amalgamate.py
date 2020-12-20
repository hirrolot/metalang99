#!/usr/bin/env python3

import sys
import re


def amalgamate(headers, header_name):
    if header_name in headers:
        return

    headers.add(header_name)

    f = open(header_name)
    content = f.read()
    f.close()
    output_f.write(content)

    for line in content.splitlines():
        match = re.search("#include <(.+)>", line)

        if match is None:
            continue

        amalgamate(headers, f"include/{match[1]}")


output_file_name = sys.argv[1]
output_f = open(output_file_name, "w")

headers = set()
amalgamate(headers, "include/epilepsy.h")

output_f.close()
