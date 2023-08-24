#include "main.h"

/**
 * print_triangle - prints a triangle followed
 * by a new line.
 */

void print_triangle(int size)
{
    /* If size is 0 or negative, print only a newline */
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i, j;

        /* Loop for each row of the triangle */
        for (i = 1; i <= size; i++)
        {
            /* Loop to print spaces before '#' characters */
            for (j = i; j < size; j++)
            {
                _putchar(' ');
            }

            /* Loop to print '#' characters */
            
	    for (j = 1; j <= i; j++)
            {
                _putchar('#');
            }

            /* Move to the next line after each row */
            _putchar('\n');
        }
    }
}
