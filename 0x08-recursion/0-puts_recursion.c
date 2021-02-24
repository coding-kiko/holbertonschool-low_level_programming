#include "holberton.h"

/**
 * _puts_recursion - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s++);
}
