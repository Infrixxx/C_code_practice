#include <stdio.h>

/**
 * main -prints the lowercase alphabet in reverse, followed by a new line.
 * Return : 0 upon success
 */

int main(void)
{
	int a;

	a='z';
	while(a>='a')
	{
	putchar(a);
	a--;
	}
	putchar('\n');
}
