#include "main.h"

/**
 * jack_bauer - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0 ; hr <= 23 ; hr++)
	{
		for (min = 0 ; min <= 59 ; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');

		}
	}
}
