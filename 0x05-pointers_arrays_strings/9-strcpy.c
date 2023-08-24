#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the null byte, to the buffer pointed to by dest.
 * @dest: The buffer where the string will be copied.
 * @src: The string to be copied.
 * Return: The pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    // Copy each character from src to dest until the null terminator is reached
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
 
    // Copy the null terminator
    // terminates when reaches null terminator
    // i is the index of the null terminator
    dest[i] = '\0';

    return dest;
}
