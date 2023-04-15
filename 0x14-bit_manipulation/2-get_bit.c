#include "main.h"
/**
 * get_bit - gets a bit given index
 *
 * @n: input number
 * @index: input index
 *
 * Return: bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;
	
	if ((index > sizeof(unsigned long int) * 8 - 1))
		return (-1);

	m = 1UL << index;

	if ((n & m) != 0)
	{
		return (1);
	}
	else
		return (0);
}

