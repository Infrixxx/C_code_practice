#include <stdio.h>

/**
 * main - prints alphabets except for q and e
 * Return: 0 upon success
 */

int main(void)
{
        int a;

        a = 'a';

        while( a <= 'z')
        {
 		if ( a == 'q' || a== 'e')
		{
			a++;
		}
		else
		{
			putchar(a);
			a++;
		}
        }
	putchar('\n');
	return (0);
}
