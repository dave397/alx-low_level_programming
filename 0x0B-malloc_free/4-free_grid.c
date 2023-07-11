#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free two dimensional array
 * @grid: array
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
