#include "main.h"

/**
 * _atoi - Return un number
 * @s: stringt to evaluate.
 *
 * Return: Number
 */
int _atoi(char *s)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;
	unsigned int num;
	int g;

	len = 0;
	while (s[len] != '\0')
		len++;

	g = 1;
	for (i = 0; s[i] < 48 || s[i] > 57; i++)
	{
		if (s[i] == '-')
			g *= -1;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = s[i] - 48;
			for (j = i + 1; s[j] >= 48 && s[j] <= 57; j++)
			{
				num = num * 10 + (s[j] - 48);
			}
			return (g * num);
		}
	}
	return (0);
}
