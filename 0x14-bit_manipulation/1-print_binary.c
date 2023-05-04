#include "main.h"

/**
 * print_binary - prints the binary representation of number
 * @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int present;

	for (m = 63; m >= 0; m--)
	{
		present = n >> m;

		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (present)
			_putchar('0');
	}
	if (!present)
		_putchar('0');
}
