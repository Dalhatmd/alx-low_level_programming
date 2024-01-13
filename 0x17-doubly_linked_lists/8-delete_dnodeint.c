#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 *
 * @head: head of the linked list
 * @index: index to be deleted
 *
 * Return: 1 if successful and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int current_idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && current_idx < index)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
			if (current_idx + 1 == index)
			{
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
				free(temp);
				return (1);
			}
		temp = temp->next;
		current_idx++;
	}
	return (-1);
}
