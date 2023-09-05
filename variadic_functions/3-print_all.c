#include "variadic_functions.h"

/**
 * print_all - This function print all.
 * @format: Is a list of types de args passed.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list listAll;
	unsigned int i;
	unsigned int n = 3;
	char *str;

	va_start(listAll, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(listAll, char *);

		if (str == NULL)
			str = "(nil)";

		if (i == 2)
			printf("%s", str);
		else
			printf("%s ,", str);
	}
	putchar(10);
	va_end(listAll);
}
