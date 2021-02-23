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
	char *p;

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			p = s;
			return (p);
		}
	}
	return ('\0');
}
