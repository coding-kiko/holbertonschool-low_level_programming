#include "holberton.h"
/**
 * put - save some lines
 *
 */

void put(void)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}

/**
 * print_times_table - Entry point
 * @n : range of multiplication
 * Return: Always 0 (success)
 */

void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int a = i * j;
int u = a % 10;
int d = (a / 10) % 10;
int c = (a / 10) / 10;
if (a < 10 && j == 0)
_putchar('0' + a);
else if (a < 10)
{
put();
_putchar('0' + a);
}
else if (a >= 10 && a <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + d);
_putchar('0' + u);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + c);
_putchar('0' + d);
_putchar('0' + u);
}
}
_putchar('\n');
}
}
}
