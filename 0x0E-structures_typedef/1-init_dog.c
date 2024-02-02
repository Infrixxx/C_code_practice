/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* Check if the input pointer is not NULL */
    if (d != NULL)
    {
        /* Allocate memory for the structure */
        *d = malloc(sizeof(struct dog));

        /* Check if memory allocation was successful */
        if (*d != NULL)
        {
            /* Assign values to the structure members using correct syntax */
            (*d)->name = name;
            (*d)->age = age;
            (*d)->owner = owner;
        }
        else
        {
            /* Handle allocation failure, e.g., return or exit */
            return;
        }
    }
}
