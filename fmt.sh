#!/bin/bash

find include tests examples scripts -iname *.h -o -iname *.c | xargs clang-format -i
