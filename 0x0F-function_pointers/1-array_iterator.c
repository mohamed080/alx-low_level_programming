#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new
 * @array: array
 * @size: array size
 * @action: funcation poiner
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;


	if (array == NULL || action == NULL)
		return;


	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}
