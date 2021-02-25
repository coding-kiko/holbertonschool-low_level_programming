#include "holberton.h"

/**
 * _strlen_recursion - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * revstring - Entry point
 * @s: string to modify
 * @i: start
 * @len: length -1
 * Return: pointer to memory area s
 */

void revstring(char *s, int i, int len)
{
	char c;

	if (i >= len)
		return;
	c = *(s + i);
	*(s + i) = *(s + len);
	*(s + len) = c;
	revstring(s, ++i, --len);
}

/**
 * is_palindrome - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = (_strlen_recursion(s) - 1);
	char *p = s;

	revstring(s, i, len);
	if (s == p)
		return (1);
	else
		return (0);
}
