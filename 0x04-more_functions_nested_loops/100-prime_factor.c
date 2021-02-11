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

	while (num != primo)
	{
		while (num % primo == 0)
		{
			num = num / primo;
		}
		primo++;
	}
	printf("%ld\n", num);
	return (0);
}
