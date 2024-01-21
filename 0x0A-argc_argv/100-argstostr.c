#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
int total_length = 0;
int i;
int j;
int k;
char *result;

    if (ac == 0 || av == NULL)
    {
        return NULL;
    }
    
    for (i = 0; i < ac; i++)
    {
        for(j = 0;av[i][j] != '\0';j++)
        {
            total_length++;
        }
    }
    
    /*Allocate memory for the concatenated string*/
    
    char *result = malloc(total_result*sizeof(char));
    
    /*incase there's no input*/
    if (result==NULL)
    {
        return (NULL);
    }
    
    k  = 0;
    
    /*Concatenate the arguments into the result string*/
    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[k++] = av[i][j];
        }
        result[k++] = '\n'; /*add newline character*/
    }

    result[k] = '\0'; /* null-terminate the string*/
    return result;
}
