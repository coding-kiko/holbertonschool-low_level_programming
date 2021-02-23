#include "holberton.h"

/**
 * _strcmp - entry point
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: idk
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0' || *s2 == '\0')
			break;
	}
	a = *s1;
	b = *s2;
	return (a - b);
}

/**
 * _strchr - Entry point
 * @s: string to modify
 * @c: char to modify with
 *
 * Return: pointer to memory area s
 */

char *_strchr(char *s, char c)
{
	if (_strcmp("", s) == 0)
		return ('\0');
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
return ('\0');
}
