#include <stdio.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;
	unsigned int num;
	int sign;

	len = 0;
	while (s[len] != '\0')
		len++;

	sign = 1;
	for (i = 0; s[i] < 48 || s[i] > 57; i++)
	{
		if (s[i] == '-')
			sign *= -1;
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
			return (sign * num);
		}
	}
	return (0);
}
