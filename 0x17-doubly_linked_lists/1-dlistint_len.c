#include "lists.h"
/**
 * dlistint_len - counts the number of nodes in a linked list
 *
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
