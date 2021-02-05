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
int p;
int h;
for (i = 48; i <= 57; i++)
{
for (e = 48; e <= 57; e++)
{
for (p = 48; p <= 57; p++)
{
for (h = 49; h <= 57; h++)
{
if ((h + p) <= (i + e))
{
}
else
{
putchar(i);
putchar(e);
putchar(' ');
putchar(p);
putchar(h);
if ((i == 57) && (e == 56))
{
}
else
{
putchar(',');
putchar(' ');

}
}
}
}
}
}
putchar('\n');
return (0);
}
