#!/bin/bash
wget -P .. https://raw.githubusercontent.com/dave397/alx-low_level_programming/master/0x18-dynamic_libraries/libsolution.so
export LD_PRELOAD="$PWD/../libsolution.so"