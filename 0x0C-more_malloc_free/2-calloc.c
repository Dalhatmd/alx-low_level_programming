#include "main.h"
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	unsigned char p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = (unsigned char)ptr;

	for (i = 0; i < nmemb *size; i++)
		p[i] = 0;

	return (ptr);
}
