#include "main.h"

/**
 * print_rev - Print in stdout, the string reverse.
 * @s: The string to reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
	const char NEW_LINE = 10;
	int i;

	i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar(NEW_LINE);
}
