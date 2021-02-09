#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: character
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n == 98)
printf("%d", n);
else
{
printf("%d", n);
putchar(',');
putchar(' ');
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
if (n == 98)
printf("%d", n);
else
{
printf("%d", n);
putchar(',');
putchar(' ');
}
n--;
}
}
else
{
printf("%d", n);
}
putchar('\n');
}
