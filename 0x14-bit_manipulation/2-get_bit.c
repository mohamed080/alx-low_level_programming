#include "main.h"

/**
 * get_bit - returns the value of a bit at given index.
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int index_value;

	if (index > 63)
		return (-1);

	index_value = (n >> index) & 1;

	return (index_value);
}

