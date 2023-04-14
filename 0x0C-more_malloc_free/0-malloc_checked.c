#include "main.h"

/**
 * malloc_checked - function that allocate memory
 * @b:int
 * Return: pointer to the array
*/

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
