#!/bin/bash/

# compile and generate a static library from C files

gcc -c *.c
ar rc liball.a *.o
rm *.o
