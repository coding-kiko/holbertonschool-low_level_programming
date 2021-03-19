#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Short description
 * @head: constant number n to be summed
 * separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
