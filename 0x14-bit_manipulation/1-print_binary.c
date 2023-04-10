#include "main.h"
#include <stdio.h>
/**
 * print_binary - converts an unsigned long int to binary
 *
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int count;

	m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	count = 0;

	while (m > 0)
	{
		putchar((n & m) ? '1' : '0');
		m >>= 1;
		count++;
		if (count & (0x3 == 0))
			putchar('\n');
	}
	putchar ('\n');
}
