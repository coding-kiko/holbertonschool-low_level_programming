#include "holberton.h"

/**
 * counter - Entry point
 * @i: string to modify
 * @n: sasd
 * Return: pointer to memory area s
 */

int counter(int n, int i)
{
	if (i == 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (counter(n, i - 1));
}

/**
 * is_prime_number - Entry point
 * @n: string to modify
 *
 * Return: pointer to memory area s
 */

int is_prime_number(int n)
{
	int i = n - 1;

	if (n < 0 || n == 0 || n == 1)
		return (0);
	if (n == 2)
		return (1);
	return (counter(n, i));
}
