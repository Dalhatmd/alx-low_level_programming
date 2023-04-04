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
	unsigned int count;

	count = 0;
	while (*head != NULL)
	{
		if (count == idx - 1)
		{
			temp = *head;
			temp->n = n;
			return (temp);
		}
		*head = (*head)->next;
	}
	return (0);
}
