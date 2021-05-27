#include "hash_tables.h"

/**
 * key_index - creates hash table with size @size
 *
 * @size: The size of the array
 * @key: the key
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * Return: the index where key was found
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
