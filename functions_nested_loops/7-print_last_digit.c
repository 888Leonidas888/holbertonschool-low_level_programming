#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - return the last digit.
 * @n: A number integer.
 *
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	int last_digit;
	int nn;

	nn = abs(n);

	last_digit = nn % 10;
	_putchar(last_digit);
	return (last_digit);
}
