#!/usr/bin/env python3

# This script generates recursion unrollers.
# Usage: ./scripts/gen_rec.py <start-lvl> <count> <output-file-name> <header-guard>

import sys

start_lvl = int(sys.argv[1])
count = int(sys.argv[2])
output_file_name = sys.argv[3]
header_guard = sys.argv[4]

with open(output_file_name, "w") as f:
    f.write(
        f"""
#ifndef {header_guard}
#define {header_guard}

#include <metalang99/eval/rec/progress.h>

"""
    )

    for i in range(start_lvl, start_lvl + count):
        f.write(
            f"#define METALANG99_PRIV_REC_{i}(choice, ...) METALANG99_PRIV_REC_NEXT({i + 1}, choice)(__VA_ARGS__)\n")

    f.write(f"\n#endif // {header_guard}\n")

print("Done!")
