#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/*
 *struct dog - a dog's basic info
 *@name: first member
 * @age: Second member
 * @owner: Third member
 */


struct Dog
{
	char *name;
	float *age;
	char *owner;
};

/*function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*ends dog header*/
