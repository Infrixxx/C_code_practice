#!/usr/bin/bash
#Script to create dynamic library

gcc -Wall -Wextra -pedantic -std=gnu89 -fPIC -c *.c #converts code to object code with support for PIC
#Position Independent Code

gcc -shared sharedlib.so *.o
