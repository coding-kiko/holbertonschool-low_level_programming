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
 * palin - Entry point
 * @s: string to modify
 * @beg: hfi
 * @med: ajdkbak
 * @end: jjdjdjdj
 * Return: pointer to memory area s
 */

int palin(char *s, int beg, int med, int end)
{
	if ((s[beg] == s[end]) && (beg < med))
		return (palin(s, beg + 1, med, end - 1));
	else if (beg >= med)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

int is_palindrome(char *s)
{
	int beg = 0;
	int end = (_strlen_recursion(s) - 1);
	int med = (_strlen_recursion(s) / 2);

	return (palin(s, beg, med, end));
}
