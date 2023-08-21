#include <stdio.h>

/**
 * main - Entry point, This program print the args in stdout.
 * @argc: Number of args.
 * @argv: Args
 *
 * Return: Success 0.
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
