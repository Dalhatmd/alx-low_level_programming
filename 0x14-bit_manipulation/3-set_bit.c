#include "main.h"
/**
 * set_bit - sets a bit to one at given index
 *
 * @n: input number
 * @index: input index
 *
 * Return: -1 if unsuccessful and 1 if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
