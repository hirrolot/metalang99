#!/bin/bash

gcc tests/main.c -std=c99 -Wall -Wextra -pedantic -Iinclude -ftrack-macro-expansion=0

bash scripts/test_examples.sh
