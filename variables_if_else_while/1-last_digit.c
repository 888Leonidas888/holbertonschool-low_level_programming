#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 *main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_n;
	const char *STR_LAST = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = abs(n) % 10;

	if (last_n > 5)
		printf("%s %d is %d and is greater then 5\n", STR_LAST, n, last_n);
	else if (last_n == 0)
		printf("%s %d is %d and is 0\n", STR_LAST, n, last_n);
	else if (last_n < 6 && last_n != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", STR_LAST, n, last_n);
	return (0);
}
