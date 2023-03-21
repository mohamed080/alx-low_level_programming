#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int c)
{
	int lastDigit;

	if (c < 0)
		lastDigit = -1 * (c % 10);
	else
		lastDigit = c % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
