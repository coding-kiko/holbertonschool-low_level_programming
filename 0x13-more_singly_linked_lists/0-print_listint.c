#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Short description
 * @h: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
