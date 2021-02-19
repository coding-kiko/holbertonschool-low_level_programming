#include "holberton.h"

/**
 * _strncpy - entry point
 * @dest: string to append
 * @src: string to be appended
 * @n: number of characters or src to be concatenated
 * Return: concatenaded strings
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++, src++, dest++)
		*dest = *src;
return (p);
}
