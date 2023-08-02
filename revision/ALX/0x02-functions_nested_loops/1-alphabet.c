#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return : 0 upon success
 */

void print_alphabet(void)
{
	int a;

	for (a='a';a<='z';a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
