#include "lists.h"
/**
 * listint_len - returns the lenth of a linked list
 *
 * @h: list to be counted
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
