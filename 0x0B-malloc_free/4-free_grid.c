#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously,
 *		created by your alloc_grid function
 * @grid: int
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}

}
