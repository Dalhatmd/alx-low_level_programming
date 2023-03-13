#include "main.h"
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
	if (size <= 0)
		return NULL;

	c = malloc(sizeof(char) * size);

	return (c);
}
