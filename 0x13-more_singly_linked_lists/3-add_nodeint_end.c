#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Short description
 * @head: head node
 * @n: number
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	last = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
