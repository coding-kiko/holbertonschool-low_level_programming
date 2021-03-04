#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - entry point
 * @b: number of arguments passed
 * array of pointers pointing to these arguments
 * Return: 0 succes
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
