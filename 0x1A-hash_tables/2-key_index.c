#include "hash_tables.h"
/**
 * key_index - gets the index of an key in a hash table
 *
 * @key: key to be searched for
 * @size: size of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
