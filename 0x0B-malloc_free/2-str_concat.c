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

	if (s == NULL)
		return (0);
	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * str_concat - entry point
 * @s1: number of arguments passed
 * @s2: array of pointers pointing to these arguments
 * Return: 0 succes
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i = 0, j = 0;

	a = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (a == NULL)
		return (NULL);
	for (; i < _strlen(s1); i++)
		a[i] = s1[i];
	for (; j < _strlen(s2); j++, i++)
		a[i] = s2[j];
	a[i] = '\0';
	return (a);
}
