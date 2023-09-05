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
	int i;
	char *str;

	va_start = (listAll, 3);

	for (i = 0; i < 3; i++)
	{
		str = va_arg(listAll, char *);

		if (str == NULL)
			str == "(nil)";

		if (i == 2)
			printf("%s", str);
		else
			printf("%s ,", str);
	}
	puts(10);
	va_end(listAll);
}
