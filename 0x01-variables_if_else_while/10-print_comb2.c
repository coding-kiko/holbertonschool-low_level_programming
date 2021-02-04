#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int e;
for (i = 48; i <= 57; i++)
{
for (e = 48; e <= 57; e++)
{
putchar(i);
putchar(e);
if ((e == 57) && (i == 57))
{
}
else
{
putchar(44);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
