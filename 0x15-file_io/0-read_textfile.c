#include "holberton.h"

/**
 * _calloc - entry point
 * @size: string to find length
 * @nmemb: asdflaf
 * Return: length
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(a + i) = 0;
	return (a);
}

/**
 * read_textfile - Entry point
 * @filename: string to modify
 * @letters: thiago silva
 * Return: pointer to memory area s
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t count = 0, written = 0;
	char *buff;

	if (!filename)
		return (0);
	buff = _calloc(sizeof(char) * letters, letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	count = read(fd, buff, letters);
	if (count != -1)
	{
		written = write(STDOUT_FILENO, buff, letters);
		if (written == -1)
		{
			free(buff);
			return (0);
		}
	}
	free(buff);
	close(fd);
	return (count);
}
