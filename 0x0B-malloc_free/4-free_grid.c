#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - entry point
 * @grid: number of arguments passed
 * @height: array of pointers pointing to these arguments
 * Return: 0 succes
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
