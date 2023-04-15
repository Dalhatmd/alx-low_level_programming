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
	int count, non_zero;

	non_zero = 0;

	m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	count = 0;

	while (m > 0)
	{
		if (m <= n || non_zero || m == 1)
		{
			putchar((n & m) ? '1' : '0');
			non_zero = 1;
		}
		else
			putchar(' ');
		m >>= 1;
		count++;
		if ((count & 0x3) == 0)
			putchar(' ');
	}
	putchar ('\n');
}
