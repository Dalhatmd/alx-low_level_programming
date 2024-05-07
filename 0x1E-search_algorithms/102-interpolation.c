#include "search_algos.h"
/**
 * interpolation_search - A function that searches for a value using the
 * interpolation search algorithm
 *
 * @array: Pointer to first element of Array
 * @size: Size of Array
 * @value: Value to search for
 *
 * Return: index of value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high;
	int low;
	int pos;

	if (array == NULL)
		return (-1);

	high = size - 1;
	low = 0;

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

		while (low <= high && value >= array[low])
		{
			if (pos >= (int)size)
			{
				printf("Value checked array[%d] is out of range\n", pos);
				return (-1);
			}
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			else if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		}
	return (-1);
}
