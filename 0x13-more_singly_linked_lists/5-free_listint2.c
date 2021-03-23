#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Short description
 * @head: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *aux;

	if (!head)
		return;
	aux = *head;
	while (aux)
	{
		temp = aux;
		aux = aux->next;
		free(temp);
	}
	*head = NULL;
}
