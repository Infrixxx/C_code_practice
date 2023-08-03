## File: 0-main.c
In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:
```
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
```
Based on the `main.c` file above, create a file named `0-main.c.` This file must test that the function positive_or_negative() gives the correct output when given a case of 0.


## File: 1-main.c
Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
- Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
- You do not have to compile with `-Wall -Werror -Wextra -pedantic` for this task.
- 
```
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
```
## File: 2-largest_number.c, main.h
This program prints the largest of three integers.
```
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
```
Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
- Line count will not be checked for this task.

## File: 3-print_remaining_days.c, main.h
This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
