#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to hash table or Null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;

	table->array = calloc(table->size, sizeof(hash_table_t));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
