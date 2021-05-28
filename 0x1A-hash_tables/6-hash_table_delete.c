#include "hash_tables.h"

/**
 * hash_table_delete - creates hash table with size @size
 *
 * @ht: The size of the array
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, idx;
	hash_node_t *temp, *aux;

	if (!ht)
		return;
	size = ht->size;
	for (idx = 0; idx < size; idx++)
	{
		aux = ht->array[idx];
		while (aux)
		{
			temp = aux;
			aux = aux->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
