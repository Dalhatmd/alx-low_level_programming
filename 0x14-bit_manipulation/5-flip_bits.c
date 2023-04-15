#include "main.h"
/**
 * flip_bits - finds number of bits that have to be flipped to
 * get to another number
 *
 * @n: input number
 * @m: second input number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask;
	int count;

	count = 0;
	mask = n ^ m;

	while (mask != 0)
	{
		count += mask & 1;
		mask >>= 1;
	}
	return (count);
}
