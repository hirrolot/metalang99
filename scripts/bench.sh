#!/bin/bash

bench() {
    echo $1
    time gcc bench/$1 -ftrack-macro-expansion=0 -Iinclude
    echo ""
}

bench "compare_25_items.h"
bench "list_of_63_items.h"
bench "100_v.h"
bench "100_call.h"
bench "many_call_in_arg_pos.h"
