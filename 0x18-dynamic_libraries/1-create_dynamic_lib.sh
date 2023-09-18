#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o libdynamic.so
LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
