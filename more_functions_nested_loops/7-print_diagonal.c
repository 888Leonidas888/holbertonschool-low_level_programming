#include "main.h"

/**
 * print_diagonal - Print in stdout diagonal.
 * @n: Print times diagonal.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	const int DIAGONAL = 92;
	const int SPACE = 32;
	const int LF = 10;
	int i, o;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (o = 1; o < i; o++)
			{
				_putchar(SPACE);
			}

			_putchar(DIAGONAL);
			_putchar(LF);
		}
	} else
		_putchar(LF);
}
