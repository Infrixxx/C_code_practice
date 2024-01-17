#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{

	if (size == 0)
	{
		return NULL;
	}
	else
	{
		char *ca=(char *)malloc(size*sizeof(c));

		*ca=c;

		return ca;
 
	}
}


int main()
{
	int size=5;
	char *pr;
 	int i;

	pr=create_array(size,'c');
	
	for(i=0;i<size;i++)
	{
		printf("%p\n",&pr[0]);
	}

	return 0;
}	
