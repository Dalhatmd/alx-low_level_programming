#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list and adds a value
 * to it
 *
 * @head: head of linked list
 * @n: value to be added
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}
