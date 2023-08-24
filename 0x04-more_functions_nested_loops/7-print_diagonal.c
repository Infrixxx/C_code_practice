#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
    int a;
    int b;

    if (n == 0)
    {
        putchar('\n');
    }
    else
    {
        for (a = 1; a <= n; a++) //loop, to increase spaces and create output
            {
                for(b = 1; b <= a; b++) //loop to generate output
                    {
                        if (a == b)
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
}
