#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Short description
 * @head: constant number n to be summed
 * idx: index node xd
 * Sum of undefined quantity of numbers
 * Return: Sum numbers
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *temp;

	while (*head)
	{
		aux = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = aux;
	}
	*head = temp;
	return (aux);
}
