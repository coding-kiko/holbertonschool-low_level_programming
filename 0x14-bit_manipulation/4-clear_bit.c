#include "holberton.h"

/**
 * clear_bit - Entry point
 * @index: string to modify
 * @n: thiago silva
 * Return: pointer to memory area s
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = index;

	if (index > 63)
		return (-1);
	*n = *n & ~(1 << i);
	return (1);
}
