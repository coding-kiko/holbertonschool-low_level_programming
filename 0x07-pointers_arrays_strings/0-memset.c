#include "holberton.h"

/**
 * _memset - Entry point
 * @s: string to modify
 * @b: char to modify with
 * @n: times the char replaces the memory
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
