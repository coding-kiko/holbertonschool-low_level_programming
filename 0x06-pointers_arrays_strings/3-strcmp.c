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
