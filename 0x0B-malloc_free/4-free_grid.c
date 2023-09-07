#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory
 * @grid: param
 * @height: param
 */
void free_grid(int **grid, int height)
{
	int i;

	/*to check allocation */
	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
