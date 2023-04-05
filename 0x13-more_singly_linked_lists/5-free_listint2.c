#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets head to nul
 *
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}

