#include "main.h"
/**
 * clear_bit - sets a bit to zero at a certain index
 *
 * @n: input number
 * @index: input index
 *
 * Return: -1 if unsuccessful and 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
