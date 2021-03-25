#include "holberton.h"
#include <string.h>

/**
 * _atoi - entry point
 * @s: string to convert to int
 * Return: converted integer
 */

int _atoi(char *s)
{
	int c = 1;
	int n = 0;

	for (; *s != 0; s++)
	{
		if (*s == '-')
			c = -c;
		if (*s >= 48 && *s <= 57)
		{
			n = n * 10 + c * (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
				return (n);
		}
	}
	return (n);
}

/**
 * binary_to_uint - entry point
 * size: string to find length
 * @b: asdflaf
 * Return: length
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int f, j, i = 0, dig = 0, dec = 0;
	char *c;

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '9')
			return (0);
	}
	if (!b)
		return (0);
	c = strdup(b);
	f = _atoi(c);
	while (f != 0)
	{
		dig = f % 10;
		dec += dig << i;
		f = f / 10;
		i++;
	}
	return (dec);
}
