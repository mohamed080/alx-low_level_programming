#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripition: computes the sum of all
 *
 * Return: On success 1.
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024 ; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
