#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print in stdout up to 98.
 * @n: Number initial for print.
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				putchar(32);
				putchar(44);
			}
		}
	}

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);

		if (i != 98)
		{
			putchar(32);
			putchar(44);
		}
	}
	putchar('\n');
}
