#include "holberton.h"

/**
 * set_bit - Entry point
 * @index: string to modify
 * @n: thiago silva
 * Return: pointer to memory area s
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = index;

	if (index > 63)
		return (-1);
	*n = (1 << i) | *n;
	return (1);
}
