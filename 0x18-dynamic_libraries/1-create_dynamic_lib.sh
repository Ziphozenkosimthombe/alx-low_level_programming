#!/bin/bash
gcc -Wall -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.os *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
