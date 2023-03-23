#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all integers passed 
 *
 * @n: number of integers
 *
 * Return: Sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	if (n == 0)
		return (0);

	sum = 0;

	va_list list;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
