#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
 * _strdup - entry point
 * @str: number of arguments passed
 * array of pointers pointing to these arguments
 * Return: 0 succes
 */

char *_strdup(char *str)
{
	int len = _strlen(str), i;
	char *a = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		a[i] = str[i];
	return (a);
}
