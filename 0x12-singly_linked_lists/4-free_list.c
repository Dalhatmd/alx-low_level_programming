#include "lists.h"
void free_list(list_t *head)
{
	list_t *tmp;

	while (head->next != NULL)
	{
		tmp = head;
		*head = *head->next;
		free(tmp);
	}
}
