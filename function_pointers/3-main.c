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
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}

	operator = argv[2];

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL)
	{
		puts("Error");
		return (99);
	}

	if (num2 == 0 && operator == '/' || operator == '%')
	{
		puts("Error");
		return (100);
	}

	result = (*get_op_func(operator))(num1, num2);

	return (printf("%d\n", result));
}
