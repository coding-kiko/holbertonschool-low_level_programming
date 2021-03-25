#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
        char a = s[0];
        int i = 0;
        int b;

        while (a != 0)
        {
                a = s[i];
                i++;
        }
        b = i - 1;
        return (b);
}

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

/**
 * rev_string - entry point
 * @s: string to revert
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);
	begin  = s;
	end    = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

/**
 * _pow_recursion - Entry point
 * @x: string to modify
 * @y: thiago silva
 * Return: pointer to memory area s
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - entry point
 * size: string to find length
 * @b: asdflaf
 * Return: length
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p, f, a = 0;
	char *c;

	if (!b)
		return (0);
	c = strdup(b);
	rev_string(c);
	for (p = 0; c[p]; p++)
	{
		if (c[p] != '0' && c[p] != '1')
			return (0);
		f = (c[p] - '0');
		a += (f * (_pow_recursion(2, p)));
	}
	return (a);
}
