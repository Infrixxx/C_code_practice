#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return : 0 upon success
 */

int main(void)
{
	int a;

	a='0';
	while(a<='9')
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
