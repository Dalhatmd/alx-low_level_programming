#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: head of the linked list
 * @n: data to be added to the node
 *
 * Return: returns the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
