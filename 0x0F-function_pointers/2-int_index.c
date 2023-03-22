#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - finds a character in an array
 *
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function thaf compares characters
 *
 * Return: index of character if found and -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
