#include "holberton.h"

/**
 * wildcmp - entry point
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: idk
 */

int wildcmp(char *s1, char *s2)
{
	int a;
	int b;

	if (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
	}
	a = *s1;
	b = *s2;
	return (a - b);
}
