#include "3-calc.h"

/**
 * main - This program
 * @argc: Numbers of args.
 * @argv: Args (calc num1 operator num2)
 *
 * Return: Result of operation, otherwise any number and print Error.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	
	operator = argv[2];

	if (argc != 4)
	{
		puts("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	return (printf("%d\n", (*get_op_func(operator))(num1, num2)));
}
