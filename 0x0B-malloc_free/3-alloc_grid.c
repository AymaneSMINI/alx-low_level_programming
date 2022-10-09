#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - matrix
 * @width: integer parameter
 * @height: integer
 * Return: integer matrix
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
