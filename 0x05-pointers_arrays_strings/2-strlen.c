#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * return : string length
 */

int _strlen(char *s)
{
	int len=0; // count of characters

	while( *s != '\0')
	{
		len++;
		s++;
	}
	retunr(len);
}
