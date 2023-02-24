#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that prints diagonals
 *
 * @n: times that diagonal will be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
		putchar(10);
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					putchar('\\');
				else if (j < i)
					putchar(' ');
			}
			putchar('10');
		}
	}
}
