#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: string to modify
 * @accept: char to modify with
 *
 * Return: pointer to memory area s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int b = 0;
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				c++;
				b = 1;
				break;
			}
		}
		if (b == 0)
			break;
		b = 0;
	}
	return (c);
}
