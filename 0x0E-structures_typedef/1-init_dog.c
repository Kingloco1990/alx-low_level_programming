#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: pointer to the variable name (string)
 * @age: float variable to store age
 * @owner: pointer to the varible owner (string)
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
