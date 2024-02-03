#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
    /* Check for name, print "(nil)" if NULL, otherwise print the name */
    if (d->name == NULL)
    {
        printf("Name: (nil)\n");
    }
    else
    {
        printf("Name: %s\n", d->name);
    }

    /* Check for owner, print "(nil)" if NULL, otherwise print the owner */
    if (d->owner == NULL)
    {
        printf("Owner: (nil)\n");
    }
    else
    {
        printf("Owner: %s\n", d->owner);
    }

    /* Print age */
    printf("Age: %f\n", d->age);
}
