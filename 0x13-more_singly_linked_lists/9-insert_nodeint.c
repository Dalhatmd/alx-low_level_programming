#include "lists.h"
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
