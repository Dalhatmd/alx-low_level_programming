#include"main.h"
#include <stdlib.h>
/**
 * malloc_checked - creates a space in memory and checks if it has been 
 * created
 *
 * @b: space to be checked
 *
 * Return: pointer to the memory created
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit (98);

	return (a);
}
