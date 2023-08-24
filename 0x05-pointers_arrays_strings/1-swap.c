#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 */

void swap_int(int *a, int *b)
{
	int temp; // we need this to store one of the value when we swap

	temp = *a; //preserve one of the values before overwriting it
	*a = *b;
	*b = temp;
}
