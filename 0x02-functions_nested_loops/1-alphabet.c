#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *			the alphabet a - z
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');

}
