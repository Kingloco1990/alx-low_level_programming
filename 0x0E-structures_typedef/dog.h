#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new defined type
 *
 * @name: pointer to the varible name (string)
 * @age: float variable for storng age
 * @owner: pointer to the variable owner (string)
 * Description: a type containing name, age, and owner variables
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
