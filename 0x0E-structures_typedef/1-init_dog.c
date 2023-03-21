#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises an instance of the dog struct
 *
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
