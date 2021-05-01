#include "lists.h"

/**
 * add_dnodeint - Entry point
 * @n: new node data
 * @head: head node
 * Return: adress on succes, null on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!head)
		new->next = NULL;
	else
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
