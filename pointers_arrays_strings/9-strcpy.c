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
	int a;

	a = 0;
	while (*(src + a) != '\0')
	{
		(*(dest + a) = *(src + a));
		a++;
	}

	*(dest + a) = *(src + a);
	return (dest);
}
