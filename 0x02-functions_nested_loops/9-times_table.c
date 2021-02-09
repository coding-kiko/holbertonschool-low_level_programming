#include "holberton.h"
/**
 * times_table - entry point
 *
 * return 0
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int a = i * j;
if (a < 10 && j == 0)
_putchar('0' + a);
else if (a < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + a);
}
else
{
int u = a % 10;
int d = a / 10;
_putchar(',');
_putchar(' ');
_putchar('0' + d);
_putchar('0' + u);
}
}
_putchar('\n');
}
}
