#include "main.h"
/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
	}
	else if (n < 10)
	{
		putchar(n + '0');
	}
	else if (n >= 10)
	{
		putchar(n / 10);
		putchar(n % 10);
	}
}
