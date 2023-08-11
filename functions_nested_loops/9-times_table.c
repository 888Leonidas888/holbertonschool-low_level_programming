#include "main.h"

/**
 * times_table - print in stdout the multiplication table up to 9.
 *
 * Return: void
 */
void times_table(void)
{
	const int COMMA = 44;
	const int SPACE_EMPTY = 32;
	int table_times = 0;
	int result, unit, ten;
	int d, i;

	for (d = 0; d <= 9; d++)
	{
		for (i = 0; i <= 9; i++)
		{
			result = i * table_times;

			if (result >= 10)
			{
				unit = result % 10;
				ten = result / 10;
			}

			if (result < 10)
			{
				if (i == 0)
				{
					_putchar(result + '0');
				} else
				{
					_putchar(COMMA);
					_putchar(SPACE_EMPTY);
					_putchar(SPACE_EMPTY);
					_putchar(result + '0');
				}
			} else
			{
				_putchar(COMMA);
				_putchar(SPACE_EMPTY);
				_putchar(ten + '0');
				_putchar(unit + '0');
			}
		}
		table_times++;
		_putchar('\n');
	}
}
