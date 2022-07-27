#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* free_grid -> function that free memory soace
* @grid: allocated memory parameter
* @height: the array height
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
