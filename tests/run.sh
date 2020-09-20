#!/bin/bash

clang main.c -std=c11 -Weverything

# All the tests are implemented via static assertions.
rm a.out
