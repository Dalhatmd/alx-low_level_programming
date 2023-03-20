#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function to print a struct
 *
 * @dog: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");

		if (d->age > 0)
			printf("Age: %f\n", d->age);
		else
			printf("nil");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil");
	}
}
