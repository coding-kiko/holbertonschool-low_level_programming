#include "holberton.h"

/**
 * print_diagonal - entry point
 *
 * @n: diagonal
 *
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;
		int j = 0;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; ++j)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
