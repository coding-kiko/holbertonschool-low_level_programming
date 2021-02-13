#include "holberton.h"

/**
 * puts2 - entry point
 * @str: string to print
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int i;
	char a = str[0];

	for (i = 0; a != 0; i++)
	{
		a = str[i];
		if (i % 2 == 0)
			_putchar(a);
	}
	_putchar('\n');
}
