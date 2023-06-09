#!/bin/bash

# compile files
gcc -c *.c
# create static library from obj files
ar rcs liball.a *.o
# remove all object files after
 rm *.o
