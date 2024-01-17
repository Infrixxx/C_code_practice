#include <stdlib.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
    /*declarations*/

    int len = 0;
    int i;
    int j;
    char *result;
    /*Count length of s1*/
    while (s1[len] != '\0') {
        len++;
    }

    /*Count length of s2*/
    i = 0;
    while (s2[i] != '\0') {
        len++;
        i++;
    }

    /*Allocate memory for the concatenated string*/
    result = (char *)malloc((len + 1) * sizeof(char));

    /*Copy s1 into result*/
    i = 0;
    while (s1[i] != '\0') 
    {
        result[i] = s1[i];
        i++;
    }

    /*Copy s2 into result*/
    j = 0;

    while (s2[j] != '\0') 
    {
	/*we add i and j, as index, so we add s2,
	 at the right place in result*/

        result[i + j] = s2[j];
        j++;
    }

    /* Null-terminate the result*/
    result[len] = '\0';

    return (result);
}






int main()
{
        char *cp;

        cp=str_concat("Hello Tumi ,","String concatenate works");

        printf("%s\n",cp);

        free (cp);

        return (0);
}
