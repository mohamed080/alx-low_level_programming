#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10times
 *
*/

void print_alphabet_x10(void)
{
	int i, m;

	for (m = 0 ; m < 10 ; m++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
