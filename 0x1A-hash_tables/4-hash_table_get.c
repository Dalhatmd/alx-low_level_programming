#include "hash_tables.h"
/**
 * hash_table_get - gets the value of a key in a hash table
 *
 * @ht: input hash table
 * @key: key to be searched for
 *
 * Return: pointer to value on success or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
