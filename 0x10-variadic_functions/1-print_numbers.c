#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Short description
 * @n: constant number n to be summed
 * @separator: separator xd
 * Return: Sum of undefined quantity of numbers
 * Description: Sum numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	if (n > 0)
	{
		va_start(p, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(p, int));
			if ((i != n - 1) && *separator != '\0')
				printf("%s", separator);
		}
		va_end(p);
	}
	printf("\n");
}
