#include "main.h"

/**
 * _strcpy - Copy string to buffer.
 * @dest: Is the buffer
 * @src: Source of string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int lenTxt;
	int i;

	lenTxt = strlen(src);

	dest = (char *)malloc(sizeof(char) * lenTxt);

	for (i = 0; src[i] = '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[lenTxt] = '\0';

	return (dest);
}
