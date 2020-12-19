#!/bin/bash

find include tests examples -iname *.h -o -iname *.c | xargs clang-format -i
