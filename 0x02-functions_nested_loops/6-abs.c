#include "holberton.h"
/**
 * _abs - Entry point
 * @n: character
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n > 0)
return (n);
else if (n == 0)
return (n);
else
return (-n);
}
