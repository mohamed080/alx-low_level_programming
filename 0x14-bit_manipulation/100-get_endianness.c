#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int m = 1;
	char *h = (char *) &m;

	return (*h);
}
