#!/bin/bash

# compile files
gcc -c -fPIC *.c
# create static library from obj files
gcc -shared -o liball.so *.o
# remove all object files after
 rm *.o
