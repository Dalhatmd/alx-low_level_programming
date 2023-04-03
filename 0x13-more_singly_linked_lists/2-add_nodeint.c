#include "lists.h"
/**
 * add_nodeint - adds a node at the head od the linked list
 *
 * @head: head of linked list
 * @n: value to be added to head of list
 *
 * Return: new head of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
