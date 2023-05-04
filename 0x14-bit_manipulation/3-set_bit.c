#include "main.h"

/**
 * set_bit - sets a bit to bit 1 at given index.
 * @n: pointer to the num
 * @index: index of the bit to set to 1
 *
 * Return: 1 if it worked ,or  -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (!!(*n |= 1L << index));
}
