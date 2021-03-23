#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Short description
 * @head: constant number n to be summed
 * @index: iiiuuseparator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *after_removed;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while ((i < (index - 1)) && temp)
	{
		temp = temp->next;
		i++;
	}
	if (!temp || !(temp->next))
		return (-1);
	after_removed = temp->next->next;
	free(temp->next);
	temp->next = after_removed;
	return (1);
}
