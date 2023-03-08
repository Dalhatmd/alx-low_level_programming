#include "main.h"
/**
 * _sqrt_recursion - Finds the natural square root of a number
 *
 * @n: input number
 *
 * Return: Square root if found, -1 if undefined
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	 if (n == 0 || n == 1)
		return (n);
	else
	{
		int res = sqrt_helper(n, n / 2);

		if (res * res == n)
			return (res);
		else
			return (-1);
	}
}
/**
 * sqrt_helper - Helper function for finding the square root
 *
 * @n: input number from first function
 * @g: first guess
 *
 * Return: returns g if square root has been found, else recurses
 */
int sqrt_helper(int n, int g)
{
	int new_g = (g + n / g) / 2;

	if (new_g >= g && new_g - g <= 1)
		return (g);
	else
		return (sqrt_helper(n, new_g));
}
