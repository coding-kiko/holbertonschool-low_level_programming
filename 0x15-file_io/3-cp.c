#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * main - Entry point
 * @argc: string to modify
 * @argv: thiago silva
 * Return: pointer to memory area s
 */

int main(int argc, char **argv)
{
	char buffer[1024];
	int file_from, file_to, closed, written;
	ssize_t count;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		closed = close(file_from);
		if (closed == -1)
		{
			dprintf(2, "Error: Can't close fd %i", file_from);
			exit (100);
		}
		exit (98);
	}

	while ((count = read(file_from, buffer, sizeof(buffer))) != 0)
	{
		written = write(file_to, buffer, count);
		if (written == -1)
		{
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit (99);
		}
	}
	return (0);
}
