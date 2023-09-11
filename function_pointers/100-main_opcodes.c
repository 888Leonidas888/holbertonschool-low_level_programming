#include <stdlib.h>
#include <stdio.h>

/**
 * main - This program print is opcode.
 * @argc: Numbers of args, only two args accept.
 * @argv: Numbers bytes to print.
 *
 * Return: Sucess 0, otherwhise number.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		puts("Error");
		return (2);
	}

	return (0);
}
