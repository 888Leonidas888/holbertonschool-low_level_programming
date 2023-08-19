#include "main.h"

/**
 * puts_half - Print in stdout, the half of a string.
 * @str: String to print.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	long len, start;
	const int NEW_LINE = 10;

	len = strlen(str);

	if (len != 0)
	{
		if (len % 2 == 0)
			start = len / 2;
		else
			start = (len - 1 / 2) + 1;

		len--;

		while (start <= len)
		{
			putchar(str[start]);
			start++;
		}
	}
	putchar(NEW_LINE);


}
