#include <stdio.h>
#include "main"
/**
 * print_to_98 - A function thag primts all numbers from n to 98 sequentially
 *
 * @n: input integer
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n);
{
	for (n ; n < 98; n++)
	{
		printf("%d", n);
		if (n <= 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(10);
	return (0);
}

