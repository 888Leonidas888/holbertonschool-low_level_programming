#include "main.h"

/**
 * free_grid - Free memory.
 * @grid: Pointer of array 2D.
 * @height: Grid to free.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
}
