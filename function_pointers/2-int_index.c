#include "function_pointers.h"

/**
 * int_index - This function return the index of number.
 * @array: Array of number a check.
 * @size: Size of array.
 * @cmp: Function to execute.
 *
 * Return: Index of element match, otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
