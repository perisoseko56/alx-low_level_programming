#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- frees a 2 dimensional grid
 * @grid:points to the 2D grid
 * @height:height of grid
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid)
}
