#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Short description
 * @head: constant number n to be summed
 * @idx: index node xd
 * @n: Sum of undefined quantity of numbers
 * Return: Sum numbers
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	while ((i < (idx - 1)) && temp)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
