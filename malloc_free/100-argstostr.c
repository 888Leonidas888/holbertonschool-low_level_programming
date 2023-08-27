#include "main.h"
/**
 * argstostr - This function concatc all the args.
 * @ac: Number of args received.
 * @av: Args received.
 *
 * Return: Pointer with new string,else NULL.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, o, u, lenArgs;
	int maxLen = 0;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		maxLen += strlen(av[i]) + 1;

	maxLen++;

	ptr = (char *)malloc(sizeof(char) * maxLen);

	if (ptr == NULL)
		return (NULL);

	u = 0;

	for (i = 0; i < ac; i++)
	{
		lenArgs = strlen(av[i]);

		for (o = 0; o < lenArgs; o++)
		{
			ptr[u] = av[i][o];
			u++;
		}

		ptr[u] = '\n';

		if (i == ac - 1)
			ptr[u + 1] = '\0';
		u++;
	}
	return (ptr);
}
