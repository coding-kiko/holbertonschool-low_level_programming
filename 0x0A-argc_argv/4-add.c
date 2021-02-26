#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * digit - entry point
 * @n: number of arguments passed
 * array of pointers pointing to these arguments
 * Return: 0 succes
 */

int digit(int n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of pointers pointing to these arguments
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;


	for (i = 0; i < argc; i++)
	{
		int s = (short) strlen(argv[i + 1]);

		if (digit(atoi(argv[i + 1])) == s)
			sum += digit(atoi(argv[i + 1]));
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
