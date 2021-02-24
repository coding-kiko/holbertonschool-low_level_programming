#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: string to modify
 * @size: char to modify with
 *
 * Return: pointer to memory area s
 */

void print_diagsums(int *a, int size)
{
	int i, j, one, two;
	int diag_one = 0;
	int diag_two = 0;

	for (i = 0; i < size; i++)
	{
		one = ((i * size) + i);
		diag_one += *(a + one);

	}
	for (j = 0; j < size; j++)
	{
		two = ((j + 1) * (size - 1));
		diag_two += *(a + two);

	}
	printf("%d, %d\n", diag_one, diag_two);
}
