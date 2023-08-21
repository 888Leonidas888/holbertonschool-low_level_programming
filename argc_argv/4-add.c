#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point, print the sum of its args.
 * @argc: Numbers of args.
 * @argv. Args to sum.
 *
 * Return: Succes 0, 1 Error.
 */
int main(int argc, char const *argv[])
{
	int i, number;
	int result = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			number = atoi(argv[i]);

			/*if (argv[i] != "0" && number == 0)*/
			if (number == 0)
			{
				printf("Error\n");
				return (1);
			} else
				result += number;
		}
	}

	printf("%d\n",result);
	return (0);
}
