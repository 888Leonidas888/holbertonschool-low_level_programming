#include "main.h"

/**
 * print_triangle - Print a triangule
 * @size: triangle heigth.
 *
 * Return: void
 */
void print_triangle(int size)
{
	const int MICHI = 35;
	const int SPACE_BLANK = 32;
	const int NEW_LINE = 10;
	int printM, printS, s, m;
	int currentSize = size;

	if (size <= 0)
		_putchar(NEW_LINE);
	else
	{
		while (size != 0)
		{
			printS = size - 1;
			printM = currentSize - printS;

			for (s = 1; s <= printS; s++)
				_putchar(SPACE_BLANK);

			for (m = 1; m <= printM; m++)
				_putchar(MICHI);

			if (size != 0)
				_putchar(NEW_LINE);

			size--;
		}
	}
}
