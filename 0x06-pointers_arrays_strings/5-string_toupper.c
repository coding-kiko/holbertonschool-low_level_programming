#include "holberton.h"

/**
 * string_toupper - entry point
 * @a: array to uppercase
 * number of elements of the array
 * Return: uppercase string
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}

	return (a);
}
