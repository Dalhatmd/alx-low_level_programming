#include "lists.h"
/**
 * add_dnodeint - adds a node at the head of a doubly linked list
 *
 * @head: head of the linked list
 * @n: data to be added to the node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
	{	new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}
