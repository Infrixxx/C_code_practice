void rev_string(char *s)
{
    int len = 0;
    
    // Calculate the length of the string
    while (s[len] != '\0')
    {
        len++;
    }
  
    // Create a temporary copy of the string
    char str[len + 1];
    for (int i = 0; i < len; i++)
    {
        str[i] = s[i];
    }
    str[len] = '\0'; // Add null terminator to the end of the copied string

    // Reverse the string and store it back in the original string
    for (int i = 0; i < len; i++)
    {
        s[i] = str[len - i - 1];
    }
}
