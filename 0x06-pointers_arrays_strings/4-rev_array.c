#include "holberton.h"

/**
 * reverse_array - entry point
 * @a: array to revert
 * @n: number of elements of the array
 * Return: converted integer
 */

void reverse_array(int *a, int n)
{
	int c;
	int *begin, *end, temp;

	begin  = a;
	end    = a;

	for (c = 0; c < n - 1; c++)
		end++;

	for (c = 0; c < n / 2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
