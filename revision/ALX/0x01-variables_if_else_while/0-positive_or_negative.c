#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if n is pos(+) or neg(-)
 * Return : 0 upon success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>=0)
	{
		printf("%d is positive",n);
	}
	else
	{
		printf("%d is negative",n);
	}
	return (0);
}
