B#include <stdio.h>
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
char ch;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (ch = 'A'; ch <= 'F'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
