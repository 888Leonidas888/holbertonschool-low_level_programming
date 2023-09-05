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
	char *name;

	va_start(listName, n);

	for (i = 0; i < n; i++)
	{
		name = va_arg(listName, char *);

		if (name == NULL)
			name = "(nil)";

		if (separator == NULL || i == n - 1)
			printf("%s", name);
		else
			printf("%s%s", name, separator);
	}
	putchar(10);
	va_end(listName);
}
