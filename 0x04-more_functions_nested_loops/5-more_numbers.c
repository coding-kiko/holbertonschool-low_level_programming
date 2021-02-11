#include "holberton.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;
	int b = 0;

	while (b != 10)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			int u = i % 10;

			if (i >= 10)
				_putchar('1');
			_putchar('0' + u);
		}
		_putchar('\n');
		b++;
	}
}
