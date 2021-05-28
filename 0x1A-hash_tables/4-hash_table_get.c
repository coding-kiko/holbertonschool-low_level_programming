#include "hash_tables.h"

/**
 * hash_table_get - creates hash table with size @size
 *
 * @ht: The size of the array
 * @key: Each cell of this array is a pointer to the first node of a linke
 * Return: value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx, size;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	size = ht->size;
	if (size == 0):
		return (NULL);
	idx = hash_djb2((const unsigned char *)key) % size;
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp((temp->key), ((char *)key)) == 0)
			return (temp->value);
	}
	return (NULL);
}
