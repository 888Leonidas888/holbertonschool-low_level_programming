#include <stdio.h>

/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	const int COMMA = 44;
	const int SPACE_BLANK = 32;
	const int LF = 13;
	int zero = 48;
	int nine = 57;
	int d1;
	int d2;

	for (d1 = zero ; d1 <= nine ; d1++)
		for (d2 = zero ; d2 <= nine ; d2++)
			if (d1 != d2 && d2 != zero && d2 > d1)
			{
				putchar(d1);
				putchar(d2);

				if (d1 != nine - 1)
				{
					putchar(COMMA);
					putchar(SPACE_BLANK);
				}
			}
	putchar(LF);
	getchar();
	return (0);
}
