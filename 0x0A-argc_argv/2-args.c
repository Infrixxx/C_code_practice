#include <stdio.h>
#include "main.h"

/*
 * main - prints all arguments
 * @argc : number of arguments
 * @argv : array of arguments
 *
 * Return : Always 0 (Success)
 */

int main(int argc , char *argv [])
{
	int i;
	
	for (i=1;i < argc; i++)
	{
		printf("argv[%d]=%s\n",i,argv[i]);
	}

	return (0);
}
