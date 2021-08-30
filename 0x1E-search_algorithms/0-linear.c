#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - linear search for element in array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
