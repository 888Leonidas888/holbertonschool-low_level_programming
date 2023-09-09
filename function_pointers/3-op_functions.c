#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: args1
 * @b: args2
 *
 * Return: The sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the sum of a and b
 * @a: args1
 * @b: args2
 *
 * Return: The sum.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the sum of a and b
 * @a: args1
 * @b: args2
 *
 * Return: The sum.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the sum of a and b
 * @a: args1
 * @b: args2
 *
 * Return: The sum.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - returns the sum of a and b
 * @a: args1
 * @b: args2
 *
 * Return: The sum.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		return (100);
	}
	return (a % b);
}
