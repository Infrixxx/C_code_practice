char *_strncat(char *dest, char *src, int n)
{
	// we need to reach the end of the dest string
	int len;
	int count;

	len = 0;
	while ( dest[len] != '\0')
	{
		len++;
	}
	
	// we need to copy the string, according to character count
	for ( count = 0; count < n ; count++)
	{
		if (src[count] != '\0') \\check if not empty string
		{
			dest[len+count]=src[count];
		}
		else 
			dest[len + count] = '\0'; // Ensure proper null termination
			return dest;
	}
	return dest;
}