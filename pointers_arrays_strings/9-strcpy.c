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
	char *ptr;
	ptr = strcpy(dest, src);
	return (ptr);
}