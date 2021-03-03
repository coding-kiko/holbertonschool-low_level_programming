#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - entry point
 * @width: number of arguments passed
 * @height: array of pointers pointing to these arguments
 * Return: 0 succes
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
