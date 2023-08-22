#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print number of coins to make change for an amount of money.
 * @argc: Number og args.
 * @argv: Amount of money to change.
 *
 * Return: Success 0, Error 1.
 */
int main(int argc, char const *argv[])
{
	int listCoint[5] = {25, 10, 5, 2, 1};
	int coint = 0;
	int cents;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents >= 0)
	{
		for (i = 0; i < 5; i++)
		{
			coint = coint +  (cents / listCoint[i]);
			cents = cents % listCoint[i];
		}
	}

	printf("%d\n", coint);
	return (0);
}
