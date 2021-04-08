#!/bin/bash

mkdir -p tests/build
cd tests/build
cmake ..
cmake --build .

echo $OSTYPE

if [[ "$OSTYPE" == "win32" ]]; then
    ./gen.exe
else
    ./gen
fi
