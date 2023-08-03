#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line. The numbers are separated
 * by a comma and a space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int a = 1;
    int b = 2;
    printf("%d, %d", a, b);
    int c = a + b;

    for (int n = 2; n <= 98; n++)
    {
        printf(", %d", c);
        a = b;
        b = c;
        c = a + b;
    }

    printf("\n");

    return (0);
}
