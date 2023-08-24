#include "main.h"

/**
 * _strdup - Return a pointer with the copy the content send.
 * @str: Content to copy.
 *
 * Return: Success pointer,Error NULL.
 */
char *_strdup(char *str)
{
	char *ptr;

	ptr = strdup(str);

	if (str == NULL || ptr == NULL)
		return (NULL);

	return (ptr);
}
