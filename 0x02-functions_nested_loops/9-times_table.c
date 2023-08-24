#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0. 
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for ( a = 0; a <= 9; a++)	//the loop completed lasti
	{
		for (b = 0; b <=9; b++)	//the first loop that is completed
		{
			c = a*b;
			if (b==0) //for when the number is 0, before any digits.
                       {
                            putchar(c + '0');
                            putchar(',');
                        }
                        else if (c <10)
                        {
                            putchar(' ');    // two spaces to format the one digit to align
                            putchar(' ');
                            putchar(c+'0');
                            putchar(',');
                        }
                        else
                        {
                            putchar(' ');	// one space since two are taken by the digits
                            putchar((c / 10) + '0'); //first digit
                            putchar((c % 10) + '0'); //second digit
                            putchar(',');
                        }
                }
                putchar('\n');
        }
}
