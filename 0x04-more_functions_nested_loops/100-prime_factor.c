#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	long int i = 612852475143;
	long int num = i;
	long int primo = 2;
	long int max_prim = 2;

	while (num != primo)
	{
		while (num % primo == 0)
		{
			num = num / primo;
			max_prim = primo;
		}
		primo++;
	}
	printf("%ld", num);
	return (0);
}
