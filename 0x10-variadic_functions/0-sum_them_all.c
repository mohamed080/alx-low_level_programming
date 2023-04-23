#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters
 * @...: A variable numbers
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, s = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}
