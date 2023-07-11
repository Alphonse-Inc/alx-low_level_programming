#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This will free 2d array
 * @grid: 2 grid
 * @height: height dimension of the gride
 * Description: it will free memory of a grid
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
