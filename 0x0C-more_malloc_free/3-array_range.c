#include "main.h"
#include <stdlib.h>

/**
 * array_range - array function
 * @min: first param
 * @max: second param
 * Return: integer
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		arr[i] = min++;

	return (arr);
}
