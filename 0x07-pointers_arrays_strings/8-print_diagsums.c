#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals in a 2d array
 * @a: input array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += a[i * size + j];
	}
	printf("%d, %d\n", sum1, sum2);
}
