#include "main.h"

/**
 * counWords - Count words of a strings.
 * @str: String to count.
 *
 * Return: Numbers of words
 */
int counWords(char *str)
{
	int i = 0;
	int words = 0;
	int lenChar;

	lenChar = strlen(str);

	if (str == NULL || lenChar == 0)
		return (words);

	while (str[i] != '\0')
	{
		if (str[i] != 32 && (str[i + 1] == 32 || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

/**
 * strtow - This function splits a string a words.
 * @str: String to split.
 *
 * Return: **Pointer type char, else NULL.
 */
char **strtow(char *str)
{
	char **ptr;
	int c, i, rows, lenWord, l, lenChar;
	int o = 0;
	int w = 0;

	lenChar = strlen(str);

	if (str == NULL || lenChar == 0)
		return (NULL);

	c = counWords(str);
	/*printf("Palabras %d\n", c);*/

	ptr = (char **)malloc(sizeof(char *) * c);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		lenWord = 1;
		while (str[w] != '\0')
		{
			if (str[w] != 32)
				lenWord++;

			if (str[w] == 32 && (str[w + 1] == 32 || str[w + 1] != 32))
			{
				w++;
				break;
			}
			w++;
		}

		ptr[i] = (char *)malloc(sizeof(char) * lenWord);

		if (ptr[i] == NULL)
		{
			for (o = 0; o < i; o++)
				free(ptr[o]);
			free(ptr);
			return (NULL);
		}
	}

	w = 0;
	for (rows = 0; rows < c; rows++)
	{
		l = 0;
		while (str[w] != '\0')
		{
			if (str[w] != 32)
				ptr[rows][l] = str[w];

			if (str[w] == 32 && (str[w + 1] == 32 || str[w + 1] != 32))
			{
				w++;
				break;
			}
			l++;
			w++;
		}
	}
	return (ptr);
}
