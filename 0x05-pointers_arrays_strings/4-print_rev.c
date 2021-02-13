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
	char a = s[0];
	int i = 0;
	int b;

	while (a != 0)
	{
		a = s[i];
		i++;
	}
	b = i - 1;
	return (b);
}
