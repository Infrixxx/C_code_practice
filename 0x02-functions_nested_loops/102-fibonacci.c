#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int n;

    a = 1;
    b = 2;
    printf("%d, %d", a, b);
    c = a + b;

    for (n = 2; n <= 49; n++)
    {
        if (n < 49)
        {
            printf("%d, ", c);
            a = b;
            b = c;
            c = a + b;
        }
        else
        {
            printf("%d", c);
            a = b;
            b = c;
            c = a + b;
        }
    }

    printf("\n");

    return (0);
}
