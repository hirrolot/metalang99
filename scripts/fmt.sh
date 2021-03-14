#!/bin/bash

find include tests examples bench etudes \
    \( -path examples/build -o -path tests/build \) -prune -false -o \
    \( -iname "*.h" \) -or \( -iname "*.c" \) | xargs clang-format -i
