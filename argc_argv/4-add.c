#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point, print the sum of its args.
 * @argc: Numbers of args.
 * @argv. Args to sum.
 *
 * Return: Succes 0, 1 Error.
 */
int main(int argc, char const *argv[])
{
	int i, index, isDigit, len;
	int result = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);

			for (index = 0; index < len; index++)
			{
				isDigit = isdigit(argv[i][index]);

				if (isDigit == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
	}

	printf("%d\n", result);
	return (0);
}
