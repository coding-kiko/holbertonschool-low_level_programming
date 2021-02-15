#include "holberton.h"

/**
 * print_rev - entry point
 * @s: string to revert
 * Return: nothing
 *
 */

void print_rev(char *s)
{
	int i;
	int l = _strlen(s);
	char a;

	for (i = l; i >= 0; i--)
	{
		a = s[i];
		_putchar(a);
	}
	_putchar('\n');
}
