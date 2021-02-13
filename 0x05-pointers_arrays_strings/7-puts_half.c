#include "holberton.h"

/**
 * puts_half - entry point
 * @str: string to print half
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int i;
	int l = _strlen(str);
	char a;
	int b = l / 2;

	if (l % 2 == 0)
	{
		for (i = b; a != 0; i++)
		{
			a = str[i];
			_putchar(a);
		}
	}
	else
	{
		for (i = (b + 1); a != 0; i++)
		{
			a = str[i];
			_putchar(a);
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
