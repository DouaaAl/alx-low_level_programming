#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees the allocated memory
 * @grid: first param
 * @height: second param
 * Return: returns nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0 ; i <= height ; i++)
			free(grid[i]);
		free(grid);
	}
}
