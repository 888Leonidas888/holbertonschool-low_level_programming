#include <stdio.h>

/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	const int LF = 10;

	for (c = 122 ; c >= 97 ; c--)
		putchar(c);
	putchar(LF);
	getchar();
	return (0);
}
