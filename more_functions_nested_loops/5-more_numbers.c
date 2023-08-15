#include "main.h"

/**
 * more_numbers - Print in stdout 14 times, the numbers of 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, o, d, u;

	for (i = 0; i < 10; i++)
	{
		for (o = 0; o <= 14; o++)
		{
			if (o >= 10)
			{
				d = o / 10;
				u = o % 10;
			} else
				u = o;


			if (o >= 10)
				_putchar(d + '0');

			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
