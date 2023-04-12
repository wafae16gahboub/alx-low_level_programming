#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the grid
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
