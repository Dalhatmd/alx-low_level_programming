#include "main.h"
/**
 * reverse_array - Reverses an array
 *
 * @a: array to be reversed
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	int b[10000];

	j = 0;

	if (n != 0)
	{

		for (i = n - 1; i >= 0; i--)
		{
			b[j] = a[i];
			j++;
		}

		i = 0;
		for (i = 0; i < n; i++)
		{
			a[i] = b[i];
		}
	}
}
