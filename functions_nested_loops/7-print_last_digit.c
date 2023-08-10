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

	last_digit = n % 10;
	nn = abs(last_digit);

	_putchar(nn + '0');
	return (nn);
}
