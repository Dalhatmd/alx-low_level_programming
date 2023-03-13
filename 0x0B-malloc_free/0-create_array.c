#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 *
 * @size: size of array
 * @c: name of array
 *
 * Return: pointer to first element of array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	if (size <= 0)
		return NULL;

	 a = malloc(sizeof(c) * size);

	return (a);
}
