#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
	int f;
	int j;

	for (f = 0; f < 8; f++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[f][j]);
		_putchar('\n');
	}
}
