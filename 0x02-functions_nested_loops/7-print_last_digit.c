#include "main.h"

/**
 * print_last_digit - prints the last digit of a number. 
 * Return : value of last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		n=-n;
		l=n%10;
	}
	else
		l=n%10;

	_putchar('0'+l);

	return(l);
}
