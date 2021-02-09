#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n: character
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int a;
a = (n % 10);
if (n >= 0)
return (a);
else
return (-a);
}
