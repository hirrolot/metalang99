#!/bin/bash

clang main.c -std=c11 -Weverything -I ../include

# All the tests are implemented via static assertions.
rm a.out
