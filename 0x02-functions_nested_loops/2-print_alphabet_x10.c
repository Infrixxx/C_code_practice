#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase.
 * Return : 0 upon success.
 */

void print_alphabet_x10(void)
{
        int a;
	int b;
	
	for(b = 0;b < 10;b++)
	{
        	for (a = 'a'; a <= 'z';a++)
        	{
                	_putchar(a);
        	}
		_putchar('\n');
	}
}
