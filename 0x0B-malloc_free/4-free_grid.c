#include <stdlib.h>
/**
 * free_frid - frees a 2d array
 * @grid: grid
 * @height: height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
