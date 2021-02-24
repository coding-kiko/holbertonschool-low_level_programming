#include "holberton.h"

/**
 * _pow_recursion - Entry point
 * @x: string to modify
 * @y: thiago silva
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
