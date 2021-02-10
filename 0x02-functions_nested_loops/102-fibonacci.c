#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{
long long int a = 1;
long long int b = 2;
int i = 0;
printf("%lld", a);
printf(",");
printf(" ");
printf("%lld", b);
printf(",");
printf(" ");
while (i != 47)
{
long long int fib = a + b;
if (fib != 12586269025)
{
printf("%lld", fib);
printf(",");
printf(" ");
a = b;
b = fib;
i++;
}
else
{
printf("%lld", fib);
a = b;
b = fib;
i++;
}
}
printf("\n");
return (0);
}
