#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Short description
 * @head: constant number n to be summed
 * index node xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
