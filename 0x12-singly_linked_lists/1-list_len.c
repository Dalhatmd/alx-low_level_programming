#include "lists.h"
/**
 * list_len - returns the counr of items in a linked list
 *
 * @h: list to be counted
 *
 * @Return: number of items in list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
