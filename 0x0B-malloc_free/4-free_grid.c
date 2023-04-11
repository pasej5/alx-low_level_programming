#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - this function frees a 2 dimensinal grid
 * @grid: this is the area to be freed
 * @height: height of the array
 * Return: 0 on success
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	return;

	for (i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
