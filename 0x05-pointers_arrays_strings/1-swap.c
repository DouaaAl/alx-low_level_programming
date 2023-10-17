#include <stdio.h>

/**
 * swap_int - Function that swaps variables
 * @a: first param
 * @b: second param
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
