void _puts2(char *s)
{
	int a;
	a = 0;
	while ( s[a] != '\0')
	{
		_putchars(s[a]);
		a+=2;
	}	
}
