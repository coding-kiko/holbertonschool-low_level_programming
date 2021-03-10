#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Short description
 * @argc: First member
 * @argv: Second member
 * iwf
 * Return: hdhdhd
 * Description: Longer description
 */

int main(int argc, char *argv[])
{
	int a, b, r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") != 0) && (atoi(argv[3])) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	r = (*get_op_func(argv[2]))(a, b);
	printf("%d", r);
	printf("\n");
	return (0);
}
