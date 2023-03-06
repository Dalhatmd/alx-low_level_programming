#include "main.h"
/**
 * memset - fills a string memory with a byte constant
 *
 * @s: input string
 * @b: byte constant
 * @n: number of bytes to be filled
 *
 * Return: Pointer to string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
