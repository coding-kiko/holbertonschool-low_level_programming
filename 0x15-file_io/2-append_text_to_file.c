#include "holberton.h"

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - Entry point
 * @filename: string to modify
 * @text_content: thiago silva
 * Return: pointer to memory area s
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	char *buff;
	ssize_t written;

	if (!filename)
		return (-1);
	len = _strlen(text_content);
	buff = malloc(sizeof(char) * (len + 1));
	if (!buff)
		return (0);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		free(buff);
		return (-1);
	}
	written = write(fd, text_content, len);
	if (written == -1)
	{
		free(buff);
		return (-1);
	}
	close(fd);
	free(buff);
	return (1);
}
