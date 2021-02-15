#include "holberton.h"

/**
 * puts2 - entry point
 * @str: string to print
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int i = 0;

	for (; *str != 0; str++, i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
