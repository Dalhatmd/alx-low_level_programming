#include "main.h"
#include <stdio.h>
/**
 * print_square - function to print a square
 *
 * @size: The size of the square to be printed
 */
void print_square(int size)
{
	if (size <= 0)
		putchar(10);
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
				putchar('#');
			putchar(10);
		}
	}
}
