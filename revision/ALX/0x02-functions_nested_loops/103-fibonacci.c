#include <stdio.h>

/**
 * main - Entry point of the program.
 * Description: Calculates the sum of even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a = 1;
    int b = 2;
    int c = a + b;
    int sum = 2; // Initialize sum with the first even term (2).
    int limit = 4000000; // The upper limit for Fibonacci terms.
    
    while (c < limit)
    {
        // Update Fibonacci sequence.
        a = b;
        b = c;
        c = a + b;

        // Check if the current term is even and add it to the sum.
        if (c % 2 == 0)
        {
            sum += c;
        }
    }

    // Print the final sum.
    printf("The sum of even-valued terms is %d\n", sum);
    return (0);
}
