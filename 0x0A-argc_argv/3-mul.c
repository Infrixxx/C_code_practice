#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s) { // Corrected function signature

    int i = 0;
    int len = 0;
    int sign = 1; // Variable to store the sign of the number
    int result = 0;
    
    // Calculate the length of the string
    while (s[len] != '\0') {
        len++;
    }

    // Skip any leading whitespace characters
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
        i++;
    }

    // Check for the sign of the number
    if (s[i] == '-') {
        sign = -1;
        i++;
    } 
    else if (s[i] == '+') 
    {
        // No need to change the sign explicitly for positive numbers
        i++;
    }

    // Convert characters to integer
    while (i < len && s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0'; // Convert character to integer
        
        // Update result by multiplying by 10 and adding the new digit
        result = result * 10 + digit;
        
        i++; // Move to the next character
    }

    return (result * sign);
}

int main(int argc __attribute__((unused)), char *argv[])
{
	int num=_atoi(argv[1]);
	int num2=_atoi(argv[2]);
	int result= num*num2;

	printf("%d",result);

	return 0;
}
