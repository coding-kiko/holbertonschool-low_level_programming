#include "holberton.h"

/**
 * _strpbrk - Entry point
 * @s: string to modify
 * @accept: char to modify with
 *
 * Return: pointer to memory area s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return ('\0');
}
