#include "holberton.h"

/**
 * _atoi - entry point
 * @s: string to convert to int
 * Return: converted integer
 */

int _atoi(char *s)
{
	int c;
	int n = 0;

	for (c = 0; *s != 0; s++)
	{
		if (*s == '-')
			c++;
		if (*s >= 48 && *s <= 57)
		{
			n = (*s - '0') + (n * 10);
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				if (c % 2 == 0)
					return (n);
				else
					return (-n);
			}
		}
	}
	return (n);
}
