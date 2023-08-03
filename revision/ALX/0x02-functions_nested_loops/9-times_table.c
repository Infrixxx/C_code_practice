#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0. 
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for ( a = 0; a <= 9; a++)
	{
		for (b = 0; b <=9; b++)
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
