#include "main.h"

/**
 * print_array - Print in stdout a array.
 * @a: Array to print.
 * @n: Elements to array.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	const int COMMA = 44;
	const int SPACE = 32;
	const int NEW_LINE = 10;
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf("%c", COMMA);
			printf("%c", SPACE);
		}
		i++;
	}
	printf("%c", NEW_LINE);
}
