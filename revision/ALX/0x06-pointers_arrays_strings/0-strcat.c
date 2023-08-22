//function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
//Returns a pointer to the resulting string dest

char *_strcat(char *dest, char *src)
{
	int i;
	int b;
	i=0;

	while ( dest[i] != '\0')
	{
		i++;
	}

	b = 0;

	while( src[b] != '\0')
	{
		dest[i] = src[b]; // begins where nullbyte is equal to the first element of the src array.
		i++;
		b++;
	}
	
	dest [i] = '\0';
	
	return dest;
}