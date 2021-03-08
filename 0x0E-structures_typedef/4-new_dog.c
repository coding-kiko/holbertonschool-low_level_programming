#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 *_strcpy - copy a string
 * @dest: destination of the copied string
 * @src: source of the string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	for (; *src != 0; src++, dest++)
		*dest = *src;
	*dest = '\0';
	return (p);
}

/**
 * _strdup - entry point
 * @str: number of arguments passed
 * array of pointers pointing to these arguments
 * Return: 0 succes
 */

char *_strdup(char *str)
{
	char *a;

	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(char) * (_strlen(str) + 1));
	if (a == NULL)
		return (NULL);
	return (_strcpy(a, str));
}

/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: iwf
 * Return: ptr
 * Description: Longer description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = _strdup(name);
	ptr->age = age;
	ptr->owner = _strdup(owner);
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
