#include <stdio.h>

/**
 *main - prints char sizes
 *Return : 0 upon success.
 */

int main(void)
{
	char c;
	int n;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu byte(s)\n",sizeof(c));
	printf("Size of a int: %zu byte(s)\n",sizeof(n));
	printf("Size of a long int: %zu byte(s)\n",sizeof(li));
        printf("Size of a long long int: %zu byte(s)\n",sizeof(lli));
        printf("Size of a float: %zu byte(s)\n",sizeof(f));

	return (0);
}
