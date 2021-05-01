#include "lists.h"

/**
 * insert_dnodeint_at_index - Short description
 * @h: constant number n to be summed
 * @idx: index node xd
 * @n: Sum of undefined quantity of numbers
 * Return: Sum numbers
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	temp = *h;
	while ((i < (idx - 1)) && temp)
	{
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		new->next = temp->next;
		new->prev = temp;
		temp->next->prev = new;
		temp->next = new;
		return (new);
	}
	else
		return (NULL);
}
