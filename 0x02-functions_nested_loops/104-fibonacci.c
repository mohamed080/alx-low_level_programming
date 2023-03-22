#include "main.h"
#include <stdio.h>

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int count, inital;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f10 > 0)
			printf("%lu", f10);
		inital = numLength(mx) - 1 - numLength(f1);

		while (f10 > 0 && inital > 0)
		{
			printf("%d", 0);
			inital--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f10 + f2o + (f1 + f2) / mx;
		f1 = f2;
		f10 = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
