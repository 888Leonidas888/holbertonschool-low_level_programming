#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: Sepator to string.
 * @n: Numbers of args.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listName;
	unsigned int i;

	va_start(listName, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%s", va_arg(listName, char *));
		else
			printf("%s%s ", va_arg(listName, char *), separator);
	}
	putchar(10);
	va_end(listName);
}
