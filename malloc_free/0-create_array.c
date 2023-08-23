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
	unsigned int i = 0;

	if (size == 0)
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
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
		return (ptr);
	}
}
