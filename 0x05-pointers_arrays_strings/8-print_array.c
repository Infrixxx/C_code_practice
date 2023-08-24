void print_array(int *a, int n)
{
	int b;
	
	for(b=0;b < n;b++)
	{
		_putchar(a[b] + '0'); // Convert integer to character
		if (b != n - 1)	// whilst it's not the last character
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
