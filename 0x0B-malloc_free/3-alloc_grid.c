#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: width of array
 * @height: height of array
 * Return: returns array or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0 ; j <= height ; j++)
				free(arr[i]);
			return (NULL);
		}

		for (j = 0 ; j < width ; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
