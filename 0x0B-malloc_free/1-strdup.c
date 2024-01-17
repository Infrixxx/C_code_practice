#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{

	int len;
	int i;
	char * _strcpy;

        if (str == NULL)
        {
                return NULL;
        }
        else
        {
		
		/*find len of str*/
		
		i=0;
		len=0;

		while (str[i] != '\0')
		{
			len++;
			i++;
		}
		
		/*use size to create array*/
		/*use len+1, to account for null byte*/
		
		_strcpy= (char *)malloc((len+1)*sizeof(char));

		/*now we fill the array with the copy*/
		
		for (i = 0 ;i < len ;i++)
		{
			_strcpy[i]=str[i];
		}

		/*remember array index is from 0, so len  is the last block*/

		_strcpy[len]='\0';

		return (_strcpy);		

        }
}





int main()
{
	char *cp;
	
	cp=_strdup("Hello Tumi,String copy works");
	
	printf("%s\n",cp);

	free (cp);
		
        return (0);
}
