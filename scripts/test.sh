#!/bin/bash

mkdir -p tests/build
cd tests/build
cmake ..
cmake --build .

if [[ "$OSTYPE" == "msys" ]]; then
    ./gen.exe
else
    ./gen
fi
