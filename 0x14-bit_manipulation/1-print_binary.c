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
	int flag;

	m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	flag = 0;

	while (m > 0)
	{
		if ((n & m) == m)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			putchar ('0');
		}
		m >>= 1;
	}
	if (flag == 0)
		putchar ('0');
}
