#include "main.h"

/**
 * print_triangle - funciton that prints triangle
 * @size: size of the function
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = i ; j <= size ; j++)
		{
			_putchar(' ');
		}

		for (k = 1 ; k <= i ; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
