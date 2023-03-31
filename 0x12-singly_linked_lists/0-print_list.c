#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("[%d] ", temp->len);
		printf("%s\n", temp->str);
		temp = temp->next;
		count++;
	}

	return (count);
}
