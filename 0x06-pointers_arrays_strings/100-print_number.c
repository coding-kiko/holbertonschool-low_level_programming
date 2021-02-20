#include "holberton.h"

/**
 * print_number - entry point
 * @n: number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if ((num / 10) != 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
