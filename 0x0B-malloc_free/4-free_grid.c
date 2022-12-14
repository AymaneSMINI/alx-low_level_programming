#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free memory
 * @grid: matrix
 * @height: int argument
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
