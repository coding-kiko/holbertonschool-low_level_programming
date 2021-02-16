#include "holberton.h"

/**
 *_strcpy - copy a string
 * @dest: destination of the copied string
 * @src: source of the string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	for (; *src != 0; src++, dest++)
		*dest = *src;
	*dest = '\0';
	return (p);
}
