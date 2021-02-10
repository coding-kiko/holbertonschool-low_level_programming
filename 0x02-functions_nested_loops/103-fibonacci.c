#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
int a = 1;
int b = 2;
int fib;
int par = 2;
while (fib <= 4000000)
{
fib = a + b;
if (fib % 2 == 0)
par += fib;
a = b;
b = fib;
}
printf("%d\n", par);
return (0);
}
