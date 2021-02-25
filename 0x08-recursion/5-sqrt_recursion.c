#include "holberton.h"

/**
 * sqrt - Entry point
 * @n: string to modify
 * @i: count
 * Return: pointer to memory area s
 */

int sqrt_rec(int n, int i)
{
	if (i == n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (sqrt_rec(n, i + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: string to modify
 *
 * Return: pointer to memory area s
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_rec(n, i));
}
