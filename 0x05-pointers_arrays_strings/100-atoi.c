#include "holberton.h"

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
			n = (*s - '0') + (n * 10);
			if (*(s + 1) < '0' || *(s + 1) > '9')
				return (n * c);
		}
	}
	return (n);
}
