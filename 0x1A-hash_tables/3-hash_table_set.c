#include "hash_tables.h"

/**
 * hash_table_set - creates hash table with size @size
 *
 * @ht: The size of the array
 * @key: Each cell of this array is a pointer to the first node of a linke
 * @value: because we want our HashTable to use a Chaining collision handling
 * Return: 1 n success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, idx;
	hash_node_t *new, *temp;

	if (!ht || !key || (strlen(key) == 0) || !value)
		return (0);
	size = ht->size;
	if (size == 0)
		return (0);
	idx = hash_djb2((const unsigned char *)key) % size;
	temp = ht->array[idx];
	while (temp)
	{
		/*printf("Control:  %s\n", temp->key);*/
		if (strcmp((temp->key), ((char *)key)) == 0)
		{
			/*printf("Se actualiza el valor: %s ----> %s\n", temp->value, value);*/
			temp->value = (char *)value;
			/*printf("nueva clave: (%s, %s)\n", temp->key, temp->value);*/
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
