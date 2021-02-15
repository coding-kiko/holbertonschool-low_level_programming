#include "holberton.h"

/**
 * print_rev - entry point
 * @s: string to revert
 * Return: nothing
 *
 */

void print_rev(char *s)
{
	int l = _strlen(s);
	int i;
	char u;

	for (i = 1; i <= l; i++)
	{
		u = *(s + (l - i));
		_putchar(u);
	}
	_putchar('\n');
}

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}
