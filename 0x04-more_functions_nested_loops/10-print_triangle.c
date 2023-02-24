#include "main.h"
#include <stdio.h>
void print_triangle(int size)
{
	int i, j;
	for (i = 1; i <= size; i++)
	{
		for (j = i; j <= size; j++)
			putchar(' ');
		for(j = 1; j <= i; j++)
			putchar ('#');
		putchar(10);
	}
}
