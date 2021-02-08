#include "holberton.h"
/**
 * _islower - Entry point
 * @c: character
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int a = c;
if ((a >= 97) && (a <= 122))
return (1);
else
return (0);
}
