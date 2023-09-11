#include <stdlib.h>
#include <stdio.h>

/**
 * function_main - Function of demo
 *
 * Return: void
 */
void function_main(void)
{
}

/**
 * main - This program print is opcode.
 * @argc: Numbers of args, only two args accept.
 * @argv: Numbers bytes to print.
 *
 * Return: Sucess 0, otherwhise number.
 */
int main(int argc, char *argv[])
{
	unsigned char *ptr = (unsigned char *)&function_main;

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

	for (int i = 0; i < sizeof(function_main; i++))
	{
		printf("%02X ", ptr[i]);
	}
	putchar(10);
	return (0);
}
