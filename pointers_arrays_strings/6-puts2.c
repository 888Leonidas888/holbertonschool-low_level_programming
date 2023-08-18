#include "main.h"

/**
 * puts2 - Printin stdout for two character. starting the first character.
 * @str: String a print.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;
	int o = 1;
	const int NEW_LINE = 10;

	i = strlen(str);

	if (i != 0)
	{
		i--;
		putchar(str[0]);

		while (o <= i)
		{
			if (o % 2 == 0)
				putchar(str[o]);
			o++;
		}
	}
	putchar(NEW_LINE);
}
