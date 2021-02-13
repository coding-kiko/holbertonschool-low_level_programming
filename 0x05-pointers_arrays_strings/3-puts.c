#include "holberton.h"

/**
 * _puts - entry point
 * @str: string to print
 * Return: nothing
 *
 */

void _puts(char *str)
{
	int i;
	char a = str[0];

	for (i = 0; a != 0; i++)
	{
		a = str[i];
		_putchar(a);
	}
	_putchar('\n');
}
