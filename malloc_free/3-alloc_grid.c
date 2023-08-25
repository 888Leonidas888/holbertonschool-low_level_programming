#include "main.h"

/**
 * alloc_grid - Created un Array of 2 dimensional.
 * @width: Columns total.
 * @height: Rows total.
 *
 * Return: Pointer to a 2 dimensional array, else NULL.
 */
int **alloc_grid(int width, int height)
{
	int rows, column;
	int **array2D;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2D = (int **)malloc(sizeof(int *) * width);

	if (array2D == NULL)
		return (NULL);

	for (rows = 0; rows < width; rows++)
	{
		array2D[rows] = (int *)malloc(sizeof(int *) * height);

		if (array2D[rows] == NULL)
			return (NULL);
	}

	for (rows = 0; rows < width; rows++)
	{
		for (column = 0; column < height; column++)
			array2D[rows][column] = 0;
	}

	return (array2D);
}
