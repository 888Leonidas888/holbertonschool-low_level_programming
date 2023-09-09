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
	int num1, num2, result, i;
	char *operator;
	char *s = "+-*/%";

	operator = argv[2];

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == *operator)
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[3]);

			result = (*get_op_func(operator))(num1, num2);

			return (printf("%d\n", result));
		}
	}

	puts("Error");
	return (99);
}
