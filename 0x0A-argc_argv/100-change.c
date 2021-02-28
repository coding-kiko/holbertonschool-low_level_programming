#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: array of pointers pointing to these arguments
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int i, c, sum = 0;
	int a[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		for (i = 0; c < a[i]; i++)
		{
		}
		sum += (c / a[i]);
		c = c % a[i];
	}
	printf("%d\n", sum);
	return (0);
}
