#include <stdio.h>
#include "lists.h"

/**
 * list_len - Short description
 * @h: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	unsigned int count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
