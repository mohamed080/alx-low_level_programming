#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *ptr;
	int f, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	for (f = 0; f < size; f++)
		ptr[f] = min++;
	return (ptr);
}
