#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - linear search for element in array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos;

	if (!array)
		return (-1);
	if (array[high] == array[low])
	{
		if (array[low] == value)
		{
			printf("Value checked array[%lu] = [%i]\n", low, array[low]);
			return (low);
		}
		else
		{
			/*printf("Value checked array[%lu] is out of range\n", low);*/
			return (-1);
		}
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
	for (; pos <= size; pos++)
	{
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
