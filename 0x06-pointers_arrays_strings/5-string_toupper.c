#include "main.h"

/**
 * string_toupper - converts lower to upper case
 * return : str (pointer to converted string.)
 */

char *string_toupper(char *str)
{
    int i = 0;

	while (str[i] != '\0')
	{
        	if (str[i] >= 'a' && str[i] <= 'z')
		{
            		str[i] = str[i] - ('a' - 'A');  //removes the lower and replaces with the upper.
							// it will always remove the 65 and  97, resulting in
							// Upper letter, decimal equivalent value
        	}
        	i++;
    }
    return str;
}
