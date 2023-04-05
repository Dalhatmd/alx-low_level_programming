#include "lists.h"
/**
 * inseet_nodeint_at_index - Inserts a node at given index
 *
 * @head: head of list
 * @idx: given index
 * @n: data to be inserted into node
 *
 * Return: pointer to inseeted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int count;

	count = 0;
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (*head != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	return (0);
}
