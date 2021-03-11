#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Short description
 * @format: constant number n to be summe
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void p_char(va_list p)
{
}
void p_int(va_list p)
{
}
void p_float(va_list p)
{
}
void p_string(va_list p)
{
}

void print_all(const char * const format, ...)
{
	int i, j;
	va_list p;

	struct dt
	{
		op_t ops[] = {
			{"c", print_char},
			{"i", print_integer},
			{"f", print_float},
			{"s", print_string},
			{'\0', '\0'}
		};
	}
	while (format[i])
	{
		while (format[i] == dt[j].o[0])
		{
			if (format)
			j++;
		}
		i++;
	}
		
}
