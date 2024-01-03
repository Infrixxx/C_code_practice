#!/usr/bin/bash
#script to compile without linking '-c'
#create object files
gcc -c *.c -pedantic -Werror -Wextra -Wall -std=gnu89
#create library
ar rc liball.a *.c
#create and update index
ranlib liball.a
#remove object files after library creation
rm -f *.o
