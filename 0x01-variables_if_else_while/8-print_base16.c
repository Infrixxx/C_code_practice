#include <stdio.h>

/**
 * main - "prints all the numbers of base 16 in lowercase."
 * Return : 0 upon success.
 */

int main(void)
{
	int a;
	int b;

	a='0';
	b='a';

	while(a<='9')
	{
		putchar(a);
		a++;
	}
	while(b<='f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
