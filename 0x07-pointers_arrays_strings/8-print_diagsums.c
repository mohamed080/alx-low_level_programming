#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int suma, sumb, y;

	suma = 0;
	sumb = 0;

	for (y = 0; y < size; y++)
	{
		suma = suma + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sumb += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", suma, sumb);
}
