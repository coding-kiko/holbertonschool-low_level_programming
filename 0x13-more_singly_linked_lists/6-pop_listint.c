#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Short description
 * @head: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

int pop_listint(listint_t **head)
{
	int aux;
	listint_t *temp;

	if (!(*head))
		return (0);
	aux = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (aux);
}
