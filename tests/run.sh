#!/bin/bash

echo "Testing clang..."
clang main.c -std=c99 -Weverything -I ../include

echo "Testing gcc..."
gcc main.c -std=c99 -Wall -Wextra -pedantic -I ../include -ftrack-macro-expansion=0

echo "All the tests have passed!"

# All the tests are implemented via static assertions.
rm a.out
