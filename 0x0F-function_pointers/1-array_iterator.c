#include "function_pointers.h"

/**
 * array_iterator - function array
 * @array: array param
 * @size: size of array param
 * @action: function pointer
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
