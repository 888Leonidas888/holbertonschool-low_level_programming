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

	lenTxt = strlen(src);
	
	dest = (char *)malloc(sizeof(char) * lenTxt);
	
	strcpy(dest, src);
	dest[lenTxt] = '\0';
	
	return (dest);
}
