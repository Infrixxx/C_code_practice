#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s) {
    int sign = 1;
    int result = 0;
    int power = 1; /* Initialize power to 1 for place value*/

    /*Skip leading whitespace characters*/
    while (*s == ' ' || *s == '\n' || *s == '\t') {
        s++;
    }

    /*Check for sign*/
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    /*Calculate power for place value*/
    while (*s >= '0' && *s <= '9') {
        power *= 10;
        s++;
    }

    /*Reset pointer to the beginning of numeric part of string*/
    s--;

    /*Process digits*/
    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0';
        result += digit * power; /*Multiply digit by its place value*/
        power /= 10; /*Move to the next lower place value*/
        s--;
    }

    return result * sign;
}

int main(int argc __attribute__((unused)), char *argv[])
{
	int num=_atoi(argv[1]);
	int num2=_atoi(argv[2]);
	int result= num*num2;

	printf("%d\n",result);

	return 0;
}
