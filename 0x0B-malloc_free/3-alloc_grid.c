#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - returns a ponter to a 2 dimensional array
 * @width: input
 * @height: input
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{ return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

