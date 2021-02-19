#include "holberton.h"

/**
 * rot13 - entry point
 * @c: string to convert to rot13
 *
 * Return: converted string
 */

char *rot13(char *c)
{
	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; c[i] != 0; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (m[j] == c[i])
			{
				c[i] = n[j];
				break;
			}
		}
	}
	return (c);
}
