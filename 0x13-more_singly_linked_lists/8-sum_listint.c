#include "lists.h"
/**
 * sum_listint - sums the data of nodes in a linked list
 *
 * @head: head of the linked list
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += (head->n);
		head = head->next;
	}
	return (sum);
}
