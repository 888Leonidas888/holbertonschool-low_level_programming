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
		putchar(c);

	for (c = 65 ; c <= 90 ; c++)
		putchar(c);

	putchar(LF);
	getchar();
	return (0);
}
