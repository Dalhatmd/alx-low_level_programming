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

	m = 1UL << index;
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	if ((*n & m) != 0)
		*n = *n & (~m);
	return (1);
}
