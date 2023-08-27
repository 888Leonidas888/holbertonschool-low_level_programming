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
	int o;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2D = (int **)malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		array2D[rows] = (int *)malloc(sizeof(int) * width);

		if (array2D[rows] == NULL)
		{
			for (o = 0; o < rows; o++)
				free(array2D[o]);
			free(array2D);
			return (NULL);
		}
	}

	for (rows = 0; rows < height; rows++)
	{
		for (column = 0; column < width; column++)
			array2D[rows][column] = 0;
	}

	return (array2D);
}
