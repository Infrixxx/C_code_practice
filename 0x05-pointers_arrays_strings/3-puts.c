#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 */

void _puts(char *str)
{
	int len;

	len=0;
	while(*str != '\0')
	{
		len++;
		str++;
	}

	write(1,str,len);
}
