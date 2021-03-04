#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - entry point
 * @min: string to find length
 * @max: asdflaf
 * Return: length
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		a[j] = i;
	return (a);
}
