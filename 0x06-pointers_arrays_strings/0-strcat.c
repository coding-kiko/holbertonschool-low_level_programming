#include "holberton.h"

/**
 * _strcat - entry point
 * @dest: string to append
 * @src: string to be appended
 * Return: concatenaded strings
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*src = '\0';
return (p);
}
