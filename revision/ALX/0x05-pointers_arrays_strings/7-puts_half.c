void puts_half(char *str)
{
	//*Declarations*//

	int a;
	a = 0;
	length=0;
	int start;
	
	// first need to determine the length of string

	while ( s[a] != '\0')
	{
		length++;
		a++;
	}

	//if it is odd, remainder of division by 2 is 1

	if (length%2 == 1)
	{
		start = ((length-1)/2)-1; //minus 1 and divide length ,then minus one for index
		
		while(s[start] != '\0')
		{
			_putchar(s[start]);
			start++;
		}
	}

	//when it is even

	else
	{
		start = ((length)/2)-1; //divide length and minus one for index
		
		while(s[start] != '\0')
		{
			_putchar(s[start]);
			start++;	
		}
	}
}
