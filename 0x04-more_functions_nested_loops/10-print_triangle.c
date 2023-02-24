#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Prints a triangle
 *
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int i;

	int j;


	if (size <= 0)
		putchar(10);

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
			putchar(' ');
		for (j = 1; j <= i; j++)
			putchar('#');
		putchar(10);
	}
}
