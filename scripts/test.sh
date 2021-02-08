#!/bin/bash

mkdir -p examples/build
cd tests/build
cmake ..
cmake --build .
