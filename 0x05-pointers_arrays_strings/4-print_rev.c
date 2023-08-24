#include "main.h"
/**
 * print_rev - function that prints a string, in reverse.
 */

void print_rev(char *s)
{
	// we have to iterate through the pointer
	// since negative indexing is not supported
	// then go back in reverse whilst printing the result
	
    int len = 0;

    // Calculate the length of the string
    while (s[len] != '\0')
    {
        len++;
    }

    // Iterate through the string in reverse and print the characters
    while (len > 0)
    {
        _putchar(s[len]); // Print the value pointed to by s
        len--;
    }
    _putchar('\n');
}

