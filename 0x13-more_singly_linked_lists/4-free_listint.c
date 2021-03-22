#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Short description
 * @head: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void free_listint(listint_t *head)
{
	listint_t *fire;

	while (head)
	{
		fire = head;
		head = head->next;
		free(fire);
	}
}
