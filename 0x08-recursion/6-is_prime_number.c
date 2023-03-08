#include "main.h"
/**
 * is_prime_helper - helper function to find prime number
 *
 * @n: input number
 * @i: n - 1
 *
 * Return: 1 if i = 1, 0 if n is divisible by i else, recurses
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
		return 1;
	if (n % i == 0)
		return 0;
	return is_prime_helper(n, i-1);
}
/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: input number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	return is_prime_helper(n, n-1);
}
