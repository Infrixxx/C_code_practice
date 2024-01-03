#!/usr/bin/bash
#script to compile without linking '-c'
#create object files
gcc -c *.c -pedantic -Wall -Wextra -std=gnu89
#create library
ar rc create_static_lib.sh *.c

#remove object files after library creation
rm -f *.o
