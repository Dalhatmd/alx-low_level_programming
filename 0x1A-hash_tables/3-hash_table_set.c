#include "hash_tables.h"
/**
 * hash_table_set - inserts a new item into a hash table
 *
 * @ht: table to be inserted to
 * @key: key of the new item
 * @value: value of the new item
 *
 * Return: 0 if unsuccessful and 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index, i;
	char *value_copy;
	hash_node_t *item_node = malloc(sizeof(hash_node_t));

	if (item_node == NULL)
		return (0);
	if (!(ht || key || value))
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	item_node->key = strdup(key);
	if (item_node->key == NULL)
	{
		free(item_node);
		return (0);
	}
	item_node->value = value_copy;
	item_node->next = ht->array[index];
	ht->array[index] = item_node;

	return (1);
}
