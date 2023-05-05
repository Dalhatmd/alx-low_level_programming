#include "main.h"
/**
 * flip_bits - returns the number of bits that need to be flipped to get from one number to another
 *
 * @n: first input number
 * @m: second input number
 *
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	result = n ^ m;
	count = 0;

	while (result != 0)
	{
		if (result & 1)
			count++;
		result >>= 1;
	}
	return (count);
}
