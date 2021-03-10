#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Short description
 *  First member
 *  Second member
 * @name: iwf
 * @f: jfjfjf
 * Description: Longer description
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
