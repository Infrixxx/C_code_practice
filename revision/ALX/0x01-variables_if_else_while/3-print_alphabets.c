#include <stdio.h>

/**
 * main - prints alphabets in lowercase and then uppercase
 * Return: 0 upon success
 */

int main(void)
{
	int a;
	int A;

	a = 'a';

	while( a <= 'z')
	{
		putchar(a);
		a++;
	}

	A= 'A';
        while( A <= 'Z')
        {
                putchar(A);
                A++;
        }
	putchar('\n');

	return (0);
}
