#include "variadic_functions.h"

/**
 * print_numbers - This function print all numbers received.
 * @separator: Separator of string.
 * @n: Numbers of args.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listNumber;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(listNumber, n);

		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d%s", va_arg(listNumber, int), separator);
			else
				printf("%d", va_arg(listNumber, int));
		}
		putchar(10);
	}

}
