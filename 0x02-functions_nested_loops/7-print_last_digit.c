#include "main.h"
/**
 * print_last_digit - Functin to print last digit of an integer
 *
 * @n: input number
 *
 * Return: last digit of integer n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
