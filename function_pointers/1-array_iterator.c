#include "function_pointers.h"

/**
 * array_iterator - This function executes a function
 * given as a parameter on each element of an array.
 * @array: Array of number.
 * @size: Size of array.
 * @action: Function to a execute.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
