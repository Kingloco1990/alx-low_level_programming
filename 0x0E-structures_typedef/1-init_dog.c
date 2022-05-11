#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to a struct dog
 * @name: pointer to a string
 * @age: float
 * @owner: pointer to a string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
