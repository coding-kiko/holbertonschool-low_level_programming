#include "holberton.h"

/**
 * print_square - entry point
 * @size: dimensions of square
 * Return: 0
 *
 */

void print_square(int size)
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
				_putchar('#');
				if (j == (size - 1))
					_putchar('\n');
			}
		}
	}
}
