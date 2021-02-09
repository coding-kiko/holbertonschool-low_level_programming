#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n: character
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int a = (n % 10);
if (n >= 0)
{
_putchar('0' + a);
return (a);
}
else
{
_putchar('0' - a);
return (-a);
}
}
