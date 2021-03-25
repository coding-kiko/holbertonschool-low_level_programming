#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * binary_to_uint - entry point
 * size: string to find length
 * @b: asdflaf
 * Return: length
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p, f, a = 0;
	char *c;

	if (!b)
		return (0);
	c = strdup(b);
	rev_string(c);
	for (p = 0; c[p]; p++)
	{
		if (c[p] != '0' && c[p] != '1')
			return (0);
		f = (_atoi(c[p]));
		a += (f * (_pow_recursion(2, p)));
	}
	return (a);
}
