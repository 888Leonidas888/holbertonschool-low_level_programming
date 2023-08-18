#include "main.h"

/**
 * rev_string -  Reverse string.
 * @s: String to reverse.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i;
	int o = 0;
	char tempArray[50];

	i = strlen(s) - 1;


	strcpy(tempArray, s);
	while (i >= 0)
	{
		s[o] = tempArray[i];
		i--;
		o++;
	}
}
