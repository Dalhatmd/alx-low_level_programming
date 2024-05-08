#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0;
	int index = 0;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	if (size == 1 && array[0] != value)
		return (-1);

	index = size / 2;
	if (array[index] == value)
	{
		if (array[index - 1] < value)
			return (index);
	}

	if (array[index] < value)
	{
		index = advanced_binary(array + index + 1, size - index - 1, value);
		if (index == -1)
			return (-1);
		return (index + (size / 2) + 1);
	}
	else
	{
		return (advanced_binary(array, index + 1, value));
	}
}
