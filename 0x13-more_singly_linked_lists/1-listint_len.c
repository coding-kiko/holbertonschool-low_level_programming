#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Short description
 * @h: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
