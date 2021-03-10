#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Short description
 * @array: First member
 * @size: Second member
 * @action: iwf
 * jfjfjf
 * Description: Longer description
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
