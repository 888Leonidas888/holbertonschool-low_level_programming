#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *FIZZ_BUZZ = "FizzBuzz";
	const char *FIZZ = "Fizz";
	const char *BUZZ = "Buzz";
	const int SCPACE_BLANK = 32;
	const int NEW_LINE = 10;

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", FIZZ_BUZZ);
		else if (i % 3 == 0)
			printf("%s", FIZZ);
		else if (i % 5 == 0)
			printf("%s", BUZZ);
		else
			printf("%d", i);

		if (i != 100)
			putchar(SCPACE_BLANK);
	}
	putchar(NEW_LINE);
	return (0);
}
