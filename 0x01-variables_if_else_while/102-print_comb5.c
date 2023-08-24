#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return : 0 upon success.
 */

int main(void)
{
	int a;
	int b;

	for (a='0';a<='9';a++)
	{
		putchar(a);
		putchar(a);
		for (b='0';b<=9;b++)
		{
			putchar(a);
			putchar(b);
			b++;
		}
		a++;
	}
	putchar(
}
