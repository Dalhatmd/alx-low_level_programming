#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the head of a linked list
 * 
 * @head: head of the linked list
 * @str: string to be copied to the new node
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if(new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
