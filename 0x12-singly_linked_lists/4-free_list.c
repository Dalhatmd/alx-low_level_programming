#include "lists.h"
/**
 * free_list - frees memory allocated for a linked list
 *
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
