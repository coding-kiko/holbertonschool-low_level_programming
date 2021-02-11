#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
			{
				printf("Buzz");
				printf(" ");
			}
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	putchar('\n');
return (0);
}
