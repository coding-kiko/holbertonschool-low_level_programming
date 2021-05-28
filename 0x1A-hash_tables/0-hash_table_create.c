#include "hash_tables.h"

/**
 * hash_table_create - creates hash table with size @size
 *
 * @size: The size of the array
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;
	hash_node_t **nodos;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	nodos = malloc(sizeof(hash_node_t **) * size);
	if (!nodos)
	{
		free(table);
		return (NULL);
	}
	table->array = nodos;
	for (i = 0; i < size; i++)
	{
		nodos[i] = NULL;
	}
	return (table);
}
