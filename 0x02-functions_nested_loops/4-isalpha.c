#include "holberton.h"
/**
 * _isalpha - Entry point
 * @c: character
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
int a = c;
if (((a >= 97) && (a <= 122)) || ((a >= 65) && (a <= 90)))
return (1);
else
return (0);
}
