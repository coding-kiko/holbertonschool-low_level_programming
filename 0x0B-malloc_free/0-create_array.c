#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - entry point
 * @size: number of arguments passed
 * @c: array of pointers pointing to these arguments
 * Return: 0 succes
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		a[i] = c;
	}
	return (a);
}
