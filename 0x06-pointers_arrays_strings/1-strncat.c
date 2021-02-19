#include "holberton.h"

/**
 * _strncat - entry point
 * @dest: string to append
 * @src: string to be appended
 * @n: number of characters or src to be concatenated
 * Return: concatenaded strings
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*dest)
		dest++;
	for (i = 0; i < n && *src != '\0'; i++, dest++, src++)
	{
		*dest = *src;
	}
return (p);
}
