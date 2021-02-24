#include "holberton.h"

/**
 * _print_rev_recursion - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
