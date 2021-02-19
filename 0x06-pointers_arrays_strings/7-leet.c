#include "holberton.h"

/**
 * leet - entry point
 * @c: string to convert to leet
 *
 * Return: converted string
 */

char *leet(char *c)
{
	char m[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; c[i] != 0; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{			
			if (c[i] == m[j] || c[i] == (m[j] + 32))
				c[i] = n[j];
		}
	}
return (c);
}
