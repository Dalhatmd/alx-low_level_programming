#include "main.h"
/**
 * get_bit - gets bit at certain index
 *
 * @n: input number
 * @index: input index
 *
 * Return: the bit at index (0 or 1) or -1 if unsuccessful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;

	return ((n & mask) >> index);
}
