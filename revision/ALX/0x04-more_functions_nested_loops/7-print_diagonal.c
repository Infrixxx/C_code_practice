#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
    int a;

    if (n == 0)
    {
        putchar('\n');
    }
    else
    {
        for(a = 1; a <= n; a++)
            {
                if (a == n)
                {
                    _putchar(' ');
                    _putchar('\\');
                    _putchar('\n');
                }
                else
                {
                    _putchar(' ');
                }
            }
    }
}
