#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Short description
 * @s: First member
 * : Second member
 * iwf
 * Return: ffff
 * Description: Longer description
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
