#include "holberton.h"

/**
 * swap_int - entry point
 * @a: number one
 * @b: number two
 * Return: Nothing
 *
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
