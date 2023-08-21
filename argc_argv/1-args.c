#include <stdio.h>

/**
 * main - Entry point, This program print in stdout the number of arguments.
 * @argc: Number og arguments
 * @argv: Arguments send our program.
 *
 * Return: Success 0.
 */
int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
