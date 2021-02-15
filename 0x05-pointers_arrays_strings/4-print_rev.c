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
