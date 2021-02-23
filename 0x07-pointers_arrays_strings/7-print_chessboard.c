#include "holberton.h"

/**
 * print_chessboard - Entry point
 * @a: string to modify
 * char to modify with
 *
 * Return: pointer to memory area s
 */

void print_chessboard(char (*a)[8])
{
	int fila, colu;

	for (fila = 0, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
	for (fila = 1, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
	for (fila = 2, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
	for (fila = 3, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
	for (fila = 4, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
	for (fila = 5, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
	for (fila = 6, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
	for (fila = 7, colu = 0; colu < 8; colu++)
		_putchar(a[fila][colu]);
	_putchar('\n');
}
