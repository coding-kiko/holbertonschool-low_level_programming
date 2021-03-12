#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Short description
 * @format: constant number n to be summe
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list p;

	op_t ops[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{'\0', '\0'}
	};
	va_start(p, format);
	while (format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (format[i] == ops[j].op[0])
			{
				(ops[j].f(p));
				printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}

void p_char(va_list p)
{
        printf("%c", va_arg(p, int));
}
void p_int(va_list p)
{
        printf("%i", va_arg(p, int));
}
void p_float(va_list p)
{
        printf("%f", va_arg(p, double));
}
void p_string(va_list p)
{
        char *str = va_arg(p, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
