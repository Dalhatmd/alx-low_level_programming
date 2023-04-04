#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at given index
 *
 * @head: head of linked list
 * @index: input index
 *
 * Return: 1 if successful, -1 if unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t temp;

	count = 0;
	while (*head != NULL)
	{
		if (count == index)
		{
			temp = **head;
			free(temp);
			return (1);
		}
		*head = (*head)->next;
		count++;
	}
	return (-1);
}
