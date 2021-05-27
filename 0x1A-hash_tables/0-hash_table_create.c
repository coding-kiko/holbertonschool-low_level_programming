#include "hash_tables.h"

/**
 * hash_table_create - creates hash table with size @size
 *
 * @size: The size of the array
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (!(table->array))
		return NULL;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
