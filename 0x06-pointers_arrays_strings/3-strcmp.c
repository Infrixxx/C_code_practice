#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * Return : 0 if strings are equal
 * -1 if s1 is less than s2 
 *  1 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	// we need to determine the lengths of each string
	//we first declare the variables
	int len1;
	int len2;
	int difference;
	
	//initiate to zero, so the first count is for character one
	len1=0;

	while (s1[len1] != '\0') // while it is not equal to null byte (terminating character)
	{
		len1++; //will increment character count by 1 until '\0'
	}

	// we repeat the above for the second string
        while (s2[len2] != '\0') // while it is not equal to null byte (terminating character)
        {
                len2++; //will increment charcter counr by 1 until '\0'
        }

	// now we determine the difference
	difference = len1 - len2;

	// check the result to determine the return value
	if ( difference == 0)
	{
		return  (0);
	}
	else if ( difference < 0)
	{
		return (-1);
	}
	else 	//if (difference > 0)
	{
		return (1);
	}
}
