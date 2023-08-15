#include "main.h"

/**
 * print_most_numbers - Print the number of 0 to 9,do not print 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num = 48;
	int nine = 57;

	while (num <= nine)
	{
		if (num != 50 && num != 52)
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
