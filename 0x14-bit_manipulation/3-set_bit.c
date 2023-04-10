#include "main.h"
/**
 * set_bit - sets bit at given index
 *
 * @n: input number
 * @index: input index
 *
 * Return: -1 if failed, 1 id successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	m = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	
	*n |= m;
	return(1);
}
