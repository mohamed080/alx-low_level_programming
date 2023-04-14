#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *potr;
	char *_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (potr);
	if (new_size == 0 && potr)
	{
		free(potr);

		return (NULL);
	}
	if (potr == 0)
		return (malloc(new_size));
	potr = malloc(new_size);
	if (potr == 0)
		return (NULL);
	_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			potr[i] = _ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			potr[i] = _ptr[i];
	}
	free(ptr);
	return (potr);
}
