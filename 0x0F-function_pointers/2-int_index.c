#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Short description
 * @array: First member
 * @size: Second member
 * @cmp: iwf
 * Return: jjjjjjj
 * Description: Longer description
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
