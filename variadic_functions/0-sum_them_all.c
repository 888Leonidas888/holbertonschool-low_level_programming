#include "variadic_functions.h"

/**
 * sum_them_all - This function adds all its args.
 * @n: Numbers of args.
 *
 * Return: Adds all args.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list listNumber;
	int total = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(listNumber, n);

	for (i = 0; i < n; i++)
		total += va_arg(listNumber, int);

	return (total);
}
