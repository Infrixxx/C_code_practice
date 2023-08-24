#include <stdio.h>

/**
 * main - prints all single digit numbers
 * Return : 0 upon success
 */

int main(void)
{
	int n;

	n = '0';
	while(n<='9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
