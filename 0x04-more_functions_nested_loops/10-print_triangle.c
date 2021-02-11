#include "holberton.h"

/**
 * print_triangle - entry point
 * @size: dimensions of triangle
 * Return: 0
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j + 2) <= size)
					_putchar(' ');
				else
					_putchar('#');
				if (j == (size - 1))
					_putchar('\n');
			}
		}
	}
}
