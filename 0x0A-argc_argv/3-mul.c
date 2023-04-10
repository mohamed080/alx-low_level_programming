#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @m: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *m)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (m[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (m[i] == '-')
			++d;

		if (m[i] >= '0' && m[i] <= '9')
		{
			digit = m[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (m[i + 1] < '0' || m[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, nu1, nu2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nu1 = _atoi(argv[1]);
	nu2 = _atoi(argv[2]);
	result = nu1 * nu2;

	printf("%d\n", result);

	return (0);
}
