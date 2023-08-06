#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const int START = 48;
	const int END = 57;
	const int COMMA = 44;
	const int SPACE_BLANK = 32;
	const int LF = 10;
	int d1, d2, d3, d4;

	for (d1 = START ; d1 <= END ; d1++)
		for (d2 = START ; d2 <= END ; d2++)
			for (d3 = START ; d3 <= END ; d3++)
				for (d4 = START ; d4 <= END ; d4++)
					if ((d1 == d3) && (d4 > d2))
					{
						putchar(d1);
						putchar(d2);
						putchar(SPACE_BLANK);
						putchar(d3);
						putchar(d4);
						putchar(COMMA);
						putchar(SPACE_BLANK);
					}

	putchar(LF);
	getchar();
	return (0);
}
