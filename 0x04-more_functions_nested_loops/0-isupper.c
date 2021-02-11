#include "holberton.h"
/**
 * _isupper - Entry point
 * @c: character
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int a = c;

	if ((a >= 'A') && (a <= 'Z'))
		return (1);
	else
		return (0);
}
