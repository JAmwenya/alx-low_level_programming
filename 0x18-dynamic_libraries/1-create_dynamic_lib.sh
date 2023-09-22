#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
gcc -shared -o liball.so *.o
nm -D liball.so
