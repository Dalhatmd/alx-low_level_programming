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

	unsigned int i;

	if (size == 0)
		return (NULL);

	 a = malloc(sizeof(c) * size);
	 if (a == NULL)
		 return (NULL);
	 for (i = 0; i < size; i++)
		 a[i] = c;

	return (a);
}
