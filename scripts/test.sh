#!/bin/bash

gcc tests/main.c -std=c99 -Wall -Wextra -pedantic -I include -ftrack-macro-expansion=0

./scripts/test_examples.sh
