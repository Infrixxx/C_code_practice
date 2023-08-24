#include <stdio.h>
/**
 * main -prints alphabet in lowercase;
 * Return : 0 upon success
 */

int main(void)
{
	int a;

	a = 'a';
	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
