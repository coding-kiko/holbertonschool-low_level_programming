#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Short description
 * @head: constant number n to be summed
 * @index: index node xd
 * @n: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node;
	unsigned int i = 0;

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
