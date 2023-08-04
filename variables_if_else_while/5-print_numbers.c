#include <stdio.h>

/**
 * main - Poitn Entry
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	const int LF = 10;

	for (n = 48 ; n <= 57 ; n++)
		putchar(n);
	putchar(LF);
	getchar();
	return (0);
}
