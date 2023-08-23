#include "main.h"

/**
 * create_array - This function create un pointer.
 * @size: Size for our pointer.
 * @c: Character for initialize the pointer.
 *
 * Return: Success return a pointer, Error NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size <= 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr[0] = c;
		return (ptr);
	}
}
