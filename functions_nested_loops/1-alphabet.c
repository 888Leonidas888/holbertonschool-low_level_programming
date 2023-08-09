#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase to stdout
 *
 * Return: void
 */

void print_alphabet(void)
{
	int start = 97;

	while (start <= 122)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
