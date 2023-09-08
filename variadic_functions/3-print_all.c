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
	int a = 0;
	int type, o;
	char *c;

	va_start(listAll, format);

	while (format != NULL && listAll != NULL && a == 0)
	{
		while (format[i] != '\0')
		{
			type = format[i];
			o = 0;	
			switch (type)
			{
				case 'c':
					printf("%c", va_arg(listAll, int));
					o = 1;
					break;
				case 'i':
					printf("%d", va_arg(listAll, int));
					o = 1;
					break;
				case 'f':
					printf("%f", va_arg(listAll, double));
					o = 1;
					break;
				case 's':
					c = va_arg(listAll, char *);
					if (c == NULL)
						c = "(nil)";
					printf("%s", c);
					o = 1;
					break;
				default:
					break;
			}	
			if (format[i + 1] != '\0' && o == 1)
				printf("%s", ", ");
			i++;
		}
		putchar(10);
		va_end(listAll);
		a++;
	}
}
