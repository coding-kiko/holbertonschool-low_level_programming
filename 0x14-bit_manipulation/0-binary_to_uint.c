#include "holberton.h"

/**
 * _pow_recursion - Entry point
 * @x: string to modify
 * @y: thiago silva
 * Return: pointer to memory area s
 */

int _pow_recursion(unsigned int x, unsigned int y)
{
        if (y == 0)
                return (1);
        else
                return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - entry point
 * size: string to find length
 * @b: asdflaf
 * Return: length
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 0, dec = 0, len = 0;

	if (!b)
                return (0);
	while (b[p])
	{
		len++;
		p++;
	}
	len--;
	for (p = 0; b[p]; p++, len--)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
		dec += (b[p] - '0') * _pow_recursion(2, len);
	}
	return (dec);
}
