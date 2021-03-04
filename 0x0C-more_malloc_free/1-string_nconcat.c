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
	unsigned int len = 0;

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
 * string_nconcat - entry point
 * @s1: number of arguments passed
 * @s2: array of pointers pointing to these arguments
 * @n:unsigned int
 * Return: 0 succes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, lens1 = _strlen(s1), lens2 = _strlen(s2);

	if (n >= lens2)
		a = malloc(sizeof(char) * (lens1 + lens2 + 1));
	else if (n < lens2)
		a = malloc(sizeof(char) * (lens1 + n + 1));
	if (a == NULL)
		return (NULL);
	for (; i < lens1; i++)
		a[i] = s1[i];
	if (n >= lens2)
	{
		for (; j < lens2; j++, i++)
			a[i] = s2[j];
	}
	else
	{
		for (; j < n; j++, i++)
			a[i] = s2[j];
	}
	a[i] = '\0';
	return (a);
}
