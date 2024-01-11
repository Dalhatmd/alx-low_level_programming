#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 *
 * @h: pointer to the head of the linked list
 * @idx: index where data is to be inserted
 * @n: data to be inserted in the node
 *
 * Return: address of new node or NULL on fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int current_idx = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp != NULL && current_idx < idx)
	{
		if (current_idx + 1 == idx)
		{
			new->prev = temp;
			new->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		current_idx++;

	}
	free(new);
	return (NULL);
}
