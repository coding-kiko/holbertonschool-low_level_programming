#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * _strdup - entry point
 * @str: number of arguments passed
 * array of pointers pointing to these arguments
 * Return: 0 succes
 */

char *_strdup(char *str)
{
	int len = strlen(str), i;
	char *a = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		a[i] = str[i];
	return (a);
}
