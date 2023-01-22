#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 *             alloc_grid function.
 * @grid: The two dimensional array that ought to be freed.
 * @height: The height or the number of rows in the array.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}

	free(grid);
}
