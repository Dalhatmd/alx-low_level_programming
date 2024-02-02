#include "hash_tables.h"
/**
 * hash_table_print - prints all items in a hash table
 *
 * @ht: table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int flag;
	hash_node_t *current = malloc(sizeof(hash_node_t));

	flag = 0;
	if (current == NULL)
		exit(EXIT_FAILURE);
	if (ht == NULL)
		exit(EXIT_FAILURE);
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			current = ht->array[i];
			while (current)
			{
				printf("'%s: %s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}

