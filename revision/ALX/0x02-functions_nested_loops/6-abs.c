#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * Return :  abs value
 */

int _abs(int n) //we need to name our parameter to use it in the function body
{
	if(n <0)
	{
		n=-n; //we convert the negative n to positive n, -*- = +
		return (n);
	}
	else
		return (n); // we return n as it is, since it's absolute
}
