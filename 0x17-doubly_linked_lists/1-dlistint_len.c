#include "lists.h"

/**
 * dlistint_len - Entry point
 * @h: node to begin with
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux = NULL;
	size_t c = 0;

	if (h == NULL)
		return (c);
	aux = h;
	while (aux->prev != NULL)
	{
		aux = aux->prev;
	}
	while (aux != NULL)
	{
		aux = aux->next;
		c++;
	}
	return (c);
}
