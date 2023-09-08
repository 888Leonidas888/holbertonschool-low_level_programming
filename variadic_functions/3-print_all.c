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
	int i = 0;
	int type;
	char *c;

	va_start(listAll, format);
	while (format != NULL && format[i] != '\0')
	{
		while (format[i] != '\0')
		{
			type = format[i];
			switch (type)
			{
				case 'c':
					printf("%c", va_arg(listAll, int));
					break;
				case 'i':
					printf("%d", va_arg(listAll, int));
					break;
				case 'f':
					printf("%f", va_arg(listAll, double));
					break;
				case 's':
					c = va_arg(listAll, char *);
					if (c == NULL)
						c = "(nil)";
					printf("%s", c);
					break;
				default:
					i++;
					continue;
			}	
			if (format[i + 1] != '\0')
				printf("%s", ", ");
			i++;
		}
		va_end(listAll);
	}
	putchar(10);
}
