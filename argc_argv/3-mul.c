#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, This program print the mult of two numbers.
 * @argc: Number of args.
 * @argv: Args.
 *
 * Return: Success 0, Error 1.
 */
int main(int argc, char const *argv[])
{
	int result;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
		return (0);
	}
}
