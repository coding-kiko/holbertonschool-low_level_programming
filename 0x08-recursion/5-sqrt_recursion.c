#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - Entry point
 * @x: string to modify
 * @y: strin
 * Return: pointer to memory area s
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: string to modify
 *
 * Return: pointer to memory area s
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_pow_recursion(n, (1 / 2)));
}
