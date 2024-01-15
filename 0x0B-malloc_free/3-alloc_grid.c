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
	arr = (int **)malloc(sizeof(int *) * width);

	for (i = 0 ; i < width ; i++)
		arr[i] = (int *)malloc(height * sizeof(int));
	for (i = 0 ; i < width ; i++)
	{
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0 ; i < width ; i++)
	{
		for (j = 0 ; j < height ; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
