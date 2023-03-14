#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimennsional grid previosly
 * @grid: input
 * @height: input
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
