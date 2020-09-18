#!/bin/bash

find include tests -iname *.h -o -iname *.c | xargs clang-format -i
