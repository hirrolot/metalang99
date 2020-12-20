#!/bin/bash

find include tests examples scripts -iname *.h -o -iname *.c ! -name unroll.h | xargs clang-format -i
