#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at a given index
 *
 * @head: head of linked list
 * @index: input index
 *
 * Return: address to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}

