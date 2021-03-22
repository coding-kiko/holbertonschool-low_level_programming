#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Short description
 * @head: constant number n to be summed
 * @n: number
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
