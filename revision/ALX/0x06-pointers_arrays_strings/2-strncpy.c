char *_strncpy(char *dest, char *src, int n)
{
	// character count of the string we copying
	int count;

	// we need to copy the string
	for ( count = 0; count < n ; count++)
	{
		if (src[count] != '\0') \\check if not empty string
		{
			dest[count]=src[count];
		}
		else 
			dest[count] = '\0'; // Ensure proper null termination
			return dest;
	}
	return dest;
}