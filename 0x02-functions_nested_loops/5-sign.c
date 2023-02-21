#include <stdio.h>
#include "main.h"
/**
 * print_sign - Function to check sign of a number
 *
 * @n: number to be checked
 *
 * Return: 1 if positive, 0 if number is zero and -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
