#include "main.h"
/**
 * memcpy - copies bytes from memory area src to memory area dest
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 *
 * Return: Destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
