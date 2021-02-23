#include "holberton.h"

/**
 * _strchr - Entry point
 * @s: string to modify
 * @c: char to modify with
 *
 * Return: pointer to memory area s
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
		if (*p == c)
			return (p);
	}
	return (0);
}
