#include <stdio.h>
#include "lists.h"

/**
 * print_list - Short description
 * @h: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	unsigned int count = 0;

	while (current)
	{
		if (!current->str)
			printf("[%d] (nil)\n", current->len);
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
