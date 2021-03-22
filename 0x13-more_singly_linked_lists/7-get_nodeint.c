#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Short description
 * @head: constant number n to be summed
 * @index: index node xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while ((i < index) && temp)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
