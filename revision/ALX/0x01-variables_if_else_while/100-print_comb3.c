#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0 upon success.
 */

int main(void)
{
	int a;
	int b;

	a='0';
	while(a<='8')
	{
		b = a + 1; //initialize b inside outer loop

		while(b<='9')
		{
			putchar(a);
			putchar(b);
			if(a!='8' || b!='9') // as long as condition is met
			{
				b++;
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
