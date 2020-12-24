#!/bin/bash

find include tests examples -iname *.h -o -iname *.c -path examples/build -prune | xargs clang-format -i
