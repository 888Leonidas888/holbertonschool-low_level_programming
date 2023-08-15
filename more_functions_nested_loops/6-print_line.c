#include "main.h"

/**
 * print_line - Print in stdout a line.
 * @n: integer, print times the sign _
 *
 * Return: void
 */
void print_line(int n)
{
	const int LINER = 95;
	int i = 0;

	if (n > 0)
		while (i < n)
		{
			_putchar(LINER);
			i++;
		}
	_putchar('\n');
}
