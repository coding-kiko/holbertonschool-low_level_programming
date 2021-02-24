#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: string to modify
 * @needle: char to modify with
 *
 * Return: pointer to memory area s
 */

char *_strstr(char *haystack, char *needle)
{
	char *uneedle = needle;

	for (; haystack != 0; haystack++)
	{
		if (*haystack == *needle)
		{
			while (*haystack == *needle)
			{
				haystack++;
				needle++;
				if (*needle == '\0')
					return (uneedle);
			}
		}
	}
	return ('\0');
}
