#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - A function thag primts all numbers from n to 98 sequentially
 *
 * @n: input integer
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
			while (n < 98)
			{
				printf("%d", n);
				if (n <= 96)
				{
					putchar(',');
					putchar(' ');
				}
				n++;
			}
		else
		{
			while (n > 98)
			{
				printf("%d", n);
				if (n >= 98)
				{
					putchad(',');
					putchar(' ');
				}
				n--;
			}
		}
	}
	_putchar(10);
}

