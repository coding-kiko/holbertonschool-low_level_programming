#include "holberton.h"

/**
 * flip_bits - Entry point
 * @m: string to modify
 * @n: thiago silva
 * Return: pointer to memory area s
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int flips = 0, x = (n ^ m);

	for (i = 31; i >= 0; i--)
	{
		if (x & (1 << i))
			flips++;
	}
	return (flips);
}
