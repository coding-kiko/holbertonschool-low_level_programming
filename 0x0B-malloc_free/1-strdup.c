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
 *_strcpy - copy a string
 * @dest: destination of the copied string
 * @src: source of the string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	for (; *src != 0; src++, dest++)
		*dest = *src;
	*dest = '\0';
	return (p);
}

/**
 * _strdup - entry point
 * @str: number of arguments passed
 * array of pointers pointing to these arguments
 * Return: 0 succes
 */

char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(char) * (_strlen(str) + 1));
	if (a == NULL)
		return (NULL);
	return (_strcpy(a, str));
}
