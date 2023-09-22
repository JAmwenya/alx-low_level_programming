#!/bin/bash

gcc -c -fpic *.c
gcc -shared -o liball.so *.o
nm -D --defined-only liball.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
