#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */

int main(void)
{
	int n;
	const int LF = 10;
	const int COMMA = 44;
	const int SPACE = 32;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(COMMA);
			putchar(SPACE);
		}
	}

	putchar(LF);
	getchar();
	return (0);
}
