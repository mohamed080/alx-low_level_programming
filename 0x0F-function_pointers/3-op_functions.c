#include "3-calc.h"

/**
 * op_add - sum of two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The sum of a and b.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The difference of a and b.
*/

int op_sub(int a, int b)
{
		return (a - b);
}

/**
 * op_mul - product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
*/

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
