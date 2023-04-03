#include "lists.h"
/**
 * pop_listint - deletes the head of a linked list and returns the content
 *
 * @head: head of linked list
 *
 * Return: contents of deleted head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	
	return (temp->n);
	*head = (*head)->next;
	free(temp);
}
