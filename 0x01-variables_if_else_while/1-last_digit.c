#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last Digit of %d\n is %d\n and is greater than 5", n, m);
	else if (m == 0)
		printf("Last Digit of %d/n is %d\n and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("Last Digit of %d\n is %d\n and is less than 6 and not 0", n, m);

	return (0);
}
