#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - entry point
 * @ac: number of arguments passed
 * @av: array of pointers pointing to these arguments
 * Return: 0 succes
 */

char *argstostr(int ac, char **av)
{
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = malloc(sizeof(char) * ac);
	if (a == NULL)
		return (NULL);
	return (a);
}
