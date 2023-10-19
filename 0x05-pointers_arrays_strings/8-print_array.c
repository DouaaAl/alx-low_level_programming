#include "main.h"

/**
 * print_array - function
 * @a: first function param
 * @n: second function param
 * Return: returns nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		printf(a[i]);
		if (i != n - 1)
			printf(", ");
}
