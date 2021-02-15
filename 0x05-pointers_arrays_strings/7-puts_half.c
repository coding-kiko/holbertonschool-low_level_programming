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
	int b = l / 2;
	int c = (l / 2) + 1;
	char m;

	if (l % 2 == 0)
	{
		while (*str != 0)
		{
			m = *(str + b);
			_putchar(m);
			str++;
		}
	}
	else
	{
		while (*str != 0)
		{
			m = *(str + c);
			_putchar(m);
			str++;
		}
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
