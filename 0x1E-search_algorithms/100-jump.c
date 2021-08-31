#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - linear search for element in array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
	size_t key = 0, i, s, prev;

	if (!array)
		return (-1);
	while (array[key] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", key, array[key]);
		key += sqrt(size);
		if (key > size)
		{
			s = sqrt(size);
			prev = key - s;
			printf("Value found between indexes [%lu] and [%lu]\n", prev, key);
			printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
			return (-1);
		}
	}
	if (key == 0)
	{
		printf("Value checked array[%lu] = [%i]\n", key, array[key]);
		printf("Value found between indexes [%lu] and [%lu]\n", key, key);
		printf("Value checked array[%lu] = [%i]\n", key, array[key]);
		return (key);
	}
	s = sqrt(size);
	prev = key - s;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, key);
	for (i = prev; i <= size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
