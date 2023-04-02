#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints elements of a linked list
 *
 * @h: list to be printed
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
