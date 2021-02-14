#include "holberton.h"

/**
 * rev_string - entry point
 * @s: string to revert
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin  = s;
	end    = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;

		begin++;
		end--;
	}
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
