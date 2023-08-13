#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 */

void print_square(int size)
{
    int a; //for outer loop
    int b; //for inner loop 

    if (size == 0)
    {
        putchar('\n');
    }
    else
    {
        for (a = 1; a <= size ; a++) //iterates for each line
            {
                for(b = 1; b <= size; b++) //iterates for each character in a line
                    {
                        if (size != b)
                        {
                            _putchar('#');
                        }
                        else
                        {
                            _putchar('\n');
                        }
                    }
            }
    }
}
