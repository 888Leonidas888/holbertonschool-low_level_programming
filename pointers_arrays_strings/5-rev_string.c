#include "main.h"

/**
 * rev_string -  Reverse string.
 * @s: String to reverse.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char *buffer;
	int lenTxt, lenTmp, i;

	lenTxt = strlen(s);

	buffer = (char *)malloc(sizeof(char) * lenTxt);

	strcpy(buffer, s);
	buffer[lenTxt] = '\0';

	lenTmp = lenTxt - 1;

	for (i = 0; buffer[i] != '\0'; i++)
	{
		s[lenTmp] = buffer[i];
		lenTmp--;
	}

	free(buffer);
	s[lenTxt] = '\0';
}
