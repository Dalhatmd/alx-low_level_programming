#include "main.h"
#include <stdio.h>
/**
 * print_line - Prints an underscore by @n amount of times
 *
 * @n: number of times an underscore will be printed
 */
void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
			putchar(95);
		putchar(10);
	}
}
