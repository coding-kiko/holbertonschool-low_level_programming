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
	char *a;
	int** array2D = 0;
	array2D = new int*[height];

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int) * (width * height));
	if (a == NULL)
		return (NULL);
	for (int h = 0; h < height; h++)
	{
		array2D[h] = new int[width];

		for (int w = 0; w < width; w++)
		{
			array2D[h][w] = w + width * h;
		}
	}

	return array2D;
}
