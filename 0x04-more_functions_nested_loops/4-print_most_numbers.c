#include "main.h"

/**
 * print_most_numbers - priint 0 - 9 unless 2 & 9
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
