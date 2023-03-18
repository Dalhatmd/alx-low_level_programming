#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a block of memory using malloc and free
 *
 * @ptr: pointer to the block of memory
 * @old_size: old size of memory
 * @new_size: new size of memory
 *
 * Return: pointer to new block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	char *old_ptr;

	char *new_ptr_char;

	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr = (char *) ptr;
	new_ptr_char = (char *) new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		*(new_ptr_char + i) = *(old_ptr + i);
	}

	return (new_ptr);
}
