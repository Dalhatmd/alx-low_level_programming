#include "main.h"
/**
 * get_endianness - gets the endianness of a system
 *
 * Return: 1 for little endianness, 0 for litrle endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	c = (char *) &x;
	return ((int) *c);
}
