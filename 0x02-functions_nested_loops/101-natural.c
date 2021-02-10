#include <stdio.h>
#include "holberton.h"

/**
 * natural - entry point
 *
 * Return: always 0 (succes)
 */

void natural(void)
{
int a = 1;
int sum = 0;
for (a = 1; a < 1024; a++)
{
if ((a % 3 == 0) || (a % 5 == 0))
sum = sum + a;
}
printf("%d\n", sum);
}
