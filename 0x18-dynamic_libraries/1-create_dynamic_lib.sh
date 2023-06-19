#!/bin/bash
gcc -wall -Wextra -Werror -pedantic -c -fpic *c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
