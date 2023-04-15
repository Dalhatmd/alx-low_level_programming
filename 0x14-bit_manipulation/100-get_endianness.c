#include "main.h"
/**
 * get_endianness - gets endianness
 *
 * Return: 1 for little endian and 0 for big endian
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *) & n == 1)
		return (1);
	else
		return (0);
}
