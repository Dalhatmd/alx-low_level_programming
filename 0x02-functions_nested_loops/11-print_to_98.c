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
		if (n > 98)
			while (n >= 98)
			{
				printf("%d", n);
				if (n > 98)
				{
					putchar(',');
					putchar(' ');
				}
				n--;
			}
		else if (n == 98)
			printf("%d", n);
		else
		{
			while (n <= 98)
			{
				printf("%d", n);
				if (n < 98)
				{
					putchar(',');
					putchar(' ');
				}
				n++;
			}
		}
	putchar(10);
}

