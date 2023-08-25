#include "main.h"

/**
 * reverse_array - reverses an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int copya[n];
	
	for ( i=0; i < n; i++) // to copy all elements to copy array
	{
		a[i]=copya[i];
	}
	

	for ( i=0;  i < n; i++)  //return i to zero and reverse the string
	{
		a[i] = copya[n-1-i];
	}
}
