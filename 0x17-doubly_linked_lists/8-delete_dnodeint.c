#include "lists.h"

/**
 * delete_dnodeint_at_index - Short description
 * @head: constant number n to be summed
 * @index: iiiuuseparator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *after_removed;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
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
	after_removed->prev = temp;
	return (1);
}
