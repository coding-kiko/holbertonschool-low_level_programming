#include "holberton.h"

/**
 * print_binary - Entry point
 * @n: string to modify
 * : thiago silva
 * Return: pointer to memory area s
 */

void print_binary(unsigned long int n)
{
	int i, bin, control = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;
		if (bin & 1)
		{
			control = 1;
			_putchar('1');
		}
		else if (control == 1)
			_putchar('0');
	}
}
