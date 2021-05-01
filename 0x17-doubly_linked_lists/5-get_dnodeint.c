#include "lists.h"

/**
 * get_dnodeint_at_index - Short description
 * @head: constant number n to be summed
 * @index: index node xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while ((i < index) && temp)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
