# 0x0A-argc_argv

This directory contains programs exploring argument count and argument vector in C.

## Table of Contents

- [0-whatsmyname.c](0-whatsmyname.c)
- [1-args.c](1-args.c)
- [2-args.c](2-args.c)
- [3-mul.c](3-mul.c)
- [4-add.c](4-add.c)
- [100-change.c](100-change.c)

## Description of Programs

**0-whatsmyname.c:** Prints its own name, including the path, to the console.

**1-args.c:** Prints the number of arguments passed to it.

**2-args.c:** Prints all arguments it receives, one per line.

**3-mul.c:** Multiplies two numbers and prints the result, or prints an error if not given exactly two arguments.

**4-add.c:** Adds positive numbers and prints the result, or prints an error for invalid input.

**100-change.c:** Calculates the minimum number of coins needed to make change for a given amount of cents.

## Compilation Instructions

Use the following command to compile each program:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <filename>.c -o <executable_name>

