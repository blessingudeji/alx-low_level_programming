#include "main.h"
#include <stdlib.h>
/**
* free_grid - a function that frees a 2 dimensional grid
* @grid: the 2 dimensional grid
* @height: height of the grid
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
