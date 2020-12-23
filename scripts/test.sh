#!/bin/bash

echo "Testing clang..."
clang tests/main.c -std=c99 -Weverything -I include

echo "Testing gcc..."
gcc tests/main.c -std=c99 -Wall -Wextra -pedantic -I include -ftrack-macro-expansion=0

mkdir -p examples/build
cd examples/build
cmake ..
cmake --build .
