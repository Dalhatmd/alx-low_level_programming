#include "main.h"
/**
 * print_triangle - Prints a triangle
 *
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
		putchar(10);
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j <= size; j++)
			putchar(' ');
		for (j = 1; j <= i; j++)
			putchar('#');
		putchar(10);
	}
}
