#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a memory
 * @grid: memory location to free
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i, *ptr;

	for (i = 0; i < height; i++)
	{
		ptr = grid[i];
		free(ptr);
	}
	free(grid);
}
