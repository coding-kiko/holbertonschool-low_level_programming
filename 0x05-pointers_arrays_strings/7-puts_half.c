#include "holberton.h"

/**
 * puts_half - entry point
 * @str: string to print half
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int l = _strlen(str);

	if (l % 2 == 0)
	{
		int n = l / 2;

		for (str += n; *str != 0; str++)
			_putchar(*str);
	}
	else
	{
		int n = (l / 2) + 1;

		for (str += n; *str != 0; str++)
			_putchar(*str);
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
