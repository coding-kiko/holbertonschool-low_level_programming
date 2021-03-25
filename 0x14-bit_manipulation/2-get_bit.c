#include "holberton.h"

/**
 * get_bit - Entry point
 * @index: string to modify
 * @n: thiago silva
 * Return: pointer to memory area s
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (((n >> index)&0x01) == 0)
		return (0);
	return (1);
}
