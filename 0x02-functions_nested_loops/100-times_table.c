#include "main.h"

/**
 * times_table - prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0 the function should not print anything.
 */

void print_times_table(int n)
{
        int a;
        int b;
        int c;
        int d;

        if (n<0 || n>15)
        {
                return;
        }
        else
        {
                for ( a = 0; a <= n; a++)
                {
                        for (b = 0; b <=n; b++)
                        {
                                c = a*b;

                                if (b==0)
                                {
                                        putchar(c + '0');
                                        putchar(',');
                                }
                                else if (c <10)
                                {
                                        putchar(' ');
                                        putchar(' ');
                                        putchar(c+'0');
                                        putchar(',');
                                }
                                else if (c>=100)
                                {
                                        d=(c / 10);
                                        putchar((d / 10) + '0');
                                        putchar((d % 10) + '0');
                                        putchar((c % 10) + '0');
                                        putchar(',');
                                }
                                else
                                {
                                        putchar(' ');
                                        putchar((c / 10) + '0');
                                        putchar((c % 10) + '0');
                                        putchar(',');
                                }
                        }
                        putchar('\n');
                }
        }
}
