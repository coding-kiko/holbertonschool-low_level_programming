#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Short description
 * @head: constant number n to be summed
 * idx: index node xd
 * Sum of undefined quantity of numbers
 * Return: Sum numbers
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *temp;

	while ((*head)->next)
	{
		aux = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = aux;
	}
	return (aux);
}
