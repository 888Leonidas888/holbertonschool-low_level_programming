#include "main.h"

/**
 * print_square -  Print in stdout a square.
 * @size: Height of square.
 *
 * Return: void
 */
void print_square(int size)
{
	const int MICHI = 35;
	const int NEW_LINE = 10;
	int i, o;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (o = 1; o <= size; o++)
				_putchar(MICHI);
			_putchar(NEW_LINE);
		}
	} else
		_putchar(NEW_LINE);
}
