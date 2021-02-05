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
for (i = 48; i <= 57; i++)
{
for (e = 49; e <= 57; e++)
{
for (p = 49; p <= 57; p++)
{
if ((i >= e) || (e >= p))
{
}
else
{
putchar(i);
putchar(e);
putchar(p);
if ((i == 55) && (e == 56))
{
}
else
{
putchar(44);
putchar(' ');
}

}
}
}
}
putchar('\n');
return (0);
}
