#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * add_node - Short description
 * @head: constant number n to be summed
 * @str: xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
