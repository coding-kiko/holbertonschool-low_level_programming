#include "holberton.h"

/**
 * _memcpy - Entry point
 * @dest: string to modify
 * @src: char to modify with
 * @n: times the char replaces the memory
 * Return: pointer to memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	unsigned int a;
	unsigned int len;
	char *p = dest;

	for (; src[i] != 0; i++)
		len = i + 1;
	for (; a < n; a++, src++, dest++)
	{
		if (a > len)
			*dest = '\0';
		else
			*dest = *src;
	}
	return (p);
}
