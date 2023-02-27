#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints n number of elements in an array
 *
 * @a: input array
 * @n: number of elementsbto be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d ", a[i]);
		else
			printf(", %d", a[i]);
	}
}
