#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{
long int a = 1;
long int b = 2;
int i = 0;
printf("%ld", a);
printf(",");
printf(" ");
printf("%ld", b);
printf(",");
printf(" ");
while (i != 47)
{
long int fib = a + b;
if (fib != 12586269025)
{
printf("%ld", fib);
printf(",");
printf(" ");
a = b;
b = fib;
i++;
}
else
{
printf("%ld", fib);
a = b;
b = fib;
i++;
}
}
printf("\n");
return (0);
}
