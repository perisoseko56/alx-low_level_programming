#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid- returns a pointer to a 2 dimensional array of integers
 * @width:width of array
 * @height:height of array
 * Return:Always 0
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **j;

	if (width <= 0 || height <= 0)
	return (NULL);

	j = malloc(sizeof(int *) * height);

		if (j == NULL)
		{
			free(j);
		return (NULL);
		}
	for (a = 0; a < height; a++)
	{
		j[a] = malloc(sizeof(int) * width);
		if (j[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(j[b]);
			}
			free(j);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			j[c][d] = 0;
		}
	}
	return (j);
}
