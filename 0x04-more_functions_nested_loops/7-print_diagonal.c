#include "main.h"
#include <stdio.h>
void print_diagonal(int n)
{
	int i;;
	for (i = 0; i < n; i++)
	{
		putchar('\t');
		putchar('/');
	}
}
