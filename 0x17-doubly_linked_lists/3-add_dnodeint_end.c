#include "lists.h"

/**
 * add_dnodeint_end - Entry point
 * @n: new node data
 * @head: head node
 * Return: adress on succes, null on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *aux = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (!head)
		return (NULL);
	aux = *head;
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (aux->next)
	{
		aux = aux->next;
	}
	aux->next = new;
	new->prev = aux;
	return (new);
}
