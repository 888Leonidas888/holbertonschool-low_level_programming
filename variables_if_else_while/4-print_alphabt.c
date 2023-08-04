#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	int LF = 10;

	for (c = 97 ; c <= 122 ; c++)
		if (c != 101 && c != 113)
			putchar(c);
	putchar(LF);
	getchar();
	return (0);
}
