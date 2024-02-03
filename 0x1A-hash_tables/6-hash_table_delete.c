#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to be deleted
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *current;
	hash_table_t *head = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				current = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
