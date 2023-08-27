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

	if (str == NULL)
		return (NULL);

	ptr = strdup(str);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
