#include "function_pointers.h"

/**
 * int_index - function index
 * @array: array param
 * @size: size param
 * @cmp: function pointer param
 * Return: returns int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if ((cmp(array[i]) != 0))
			return (i);
	}

	return (-1);
}
