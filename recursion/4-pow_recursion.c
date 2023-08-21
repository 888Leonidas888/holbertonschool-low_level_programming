#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: Base
 * @y: Exponent
 *
 * Return: Int
 */
int _pow_recursion(int x, int y)
{
	int r = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	r *= _pow_recursion(x, y - 1);

	return (r);
}
