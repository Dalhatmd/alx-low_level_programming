#include "main.h"
#include <stdlib.h>
/**
 * calloc - allocates memory
 *
 * @nmemb: bytes to be allocated
 * @size: size of data type
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	char *p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = ptr;

	for (i = 0; i < nmemb *size; i++)
		p[i] = 0;

	return (ptr);
}
