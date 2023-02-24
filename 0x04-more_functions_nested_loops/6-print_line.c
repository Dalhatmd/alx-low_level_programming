#include "main.h"
#include <stdio.h>
void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
		putchar((95) * n);
}
