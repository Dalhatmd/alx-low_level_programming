#include "main.h"
/**
 * clear_bit - sets bit at given index to zero
 *
 * @n: input number
 * @index: input index
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	
	m = ~(1UL << index);
	*n &= m;

	return (1);
}
