#include <stdio.h>
#include <stdlib.h>
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

/**
 * _realloc - entry point
 * @ptr: number of arguments passed
 * @old_size: array of pointers pointing to these arguments
 * @new_size:unsigned int
 * Return: 0 succes
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(new_size));
	else if (new_size <= old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (newptr)
	{
		_memcpy(newptr, ptr, old_size);
		free(ptr);
	}
	return (newptr);
}
