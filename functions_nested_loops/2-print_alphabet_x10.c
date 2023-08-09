#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase to stdout
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int start;
	int ten_times = 1;

	while (ten_times <= 10)
	{
		start = 97;

		while (start <= 122)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		ten_times++;
	}
}
