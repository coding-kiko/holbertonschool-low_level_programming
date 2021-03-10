#include "calc.h"
#include <stdio.h>
#include <string.h>

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
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != '+' && argv[2] != '*' && argv[2] != '-' && argv[2] != '/' && argv[2] != '%' &&)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == '%' || argv[2] == '/') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

}
