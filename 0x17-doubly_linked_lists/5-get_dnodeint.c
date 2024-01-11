#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node in a linked list at a given index
 *
 * @head: head of the linked list
 * @index: index to be found
 *
 * Return: node at index if successful or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;

	}
	if (n > index)
		return (NULL);
	return (NULL);
}
