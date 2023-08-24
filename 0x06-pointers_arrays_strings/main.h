#ifndef MAIN_H
#define MAIN_H

// include all the headers here
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// Function Prototypes here.
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
#endif 