#include "holberton.h"

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _strncpy - entry point
 * @dest: string to append
 * @src: string to be appended
 * @n: number of characters or src to be concatenated
 * Return: concatenaded strings
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;
	int l = _strlen(src);

	for (i = 0; i < n; i++, src++, dest++)
	{
		if (i > l)
			*dest = '\0';
		else
			*dest = *src;
	}
	return (p);
}
