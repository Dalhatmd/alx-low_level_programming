#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: head of the list
 * @str: string to be copied to the new node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	size_t len;

	len = 0;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (str[len])
		len++;

	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}
