#include "search_algos.h"
/**
 * exponential_search - Searches for a value in an array using the exponential
 * search algorithm
 *
 * @array: Input array
 * @size: size of array
 * @value: Value to be searched for
 *
 * Return: index of value
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 0;
	int j, low, high, k, mid;

	if (array == NULL)
		return (-1);

	if (array[i] == value)
		return (i);
	j = 1;
	while (j < (int)size && array[j] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j = j * 2;
	}

	low = j / 2;
	high = (j < (int)size) ? j : (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", low, high);


	while (low <= high)
	{
		printf("searching in array: ");
		for (k = low; k <= high; k++)
			printf("%d, ", array[k]);
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
