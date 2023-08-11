#include "main.h"

/**
 * jack_bauer - print in stdout the all minutes of day
 *
 * Return: void
 */
void jack_bauer(void)
{
	const int DOUBLE_POINT = 58;
	int hh, h, mm, m;

	for (hh = 48; hh <= 50; hh++)
	{
		for (h = 48; h <= 57; h++)
		{
			for (mm = 48; mm <= 53; mm++)
			{
				for (m = 48; m <= 57; m++)
				{
					_putchar(hh);
					_putchar(h);
					_putchar(DOUBLE_POINT);
					_putchar(mm);
					_putchar(m);
					_putchar('\n');
				}
			}

			if (hh == 50 && h == 51)
				break;
		}
	}
}
