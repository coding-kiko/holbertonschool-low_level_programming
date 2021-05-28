#include "hash_tables.h"

/**
 * hash_table_print - creates hash table with size @size
 *
 * @ht: The size of the array
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int size, idx, flag = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	size = ht->size;
	for (idx = 0; idx < size; idx++)
	{
		temp = ht->array[idx];
		while (temp)
		{
			if (idx != 0 && flag == 1)
				printf(", ");
			flag = 1;
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
