#include "holberton.h"

/**
 * factorial - Entry point
 * @n: string to modify
 *
 * Return: pointer to memory area s
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
