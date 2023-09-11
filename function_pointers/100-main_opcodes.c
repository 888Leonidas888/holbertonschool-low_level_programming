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
	char *ptr = (char *)main;
	int lenByte = 0;
	int i;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	lenByte = atoi(argv[1]);

	if (lenByte < 0)
	{
		puts("Error");
		return (2);
	}

	for (i = 0; i < lenByte; i++)
	{
		printf("%02x ", ptr[i]);
	}
	putchar(10);
	return (0);
}
