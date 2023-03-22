#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - runs all functions in an array
 *
 * @array: array of pointers to functions
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
