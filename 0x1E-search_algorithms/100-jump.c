#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int i = 0;
	int j = 0;
	int k;

	while (j < (int)size && array[j] < value)
	{
        if (array[j] == value)
            return (j);
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		i = j;
		j += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", i, j);
	for (k = i; k < (int)size && k <= j; k++)
	{
		printf("Value checked array[%d] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
