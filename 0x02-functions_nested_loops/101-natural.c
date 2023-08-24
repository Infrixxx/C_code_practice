#include "main.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024.
 * Return : 0 upon success
 */

int main(void)
{
	int a;
	int b;

	b=0;
	for (a=0; a<1024; a++)
	{
		if (a%3==0 || a%5==0)
		{
			b=b+a;
			b++;
		}
	}
	printf("Sum of multiples of 3 or 5 below 1024: %d\n", b);

	return (0);
}
