#include "main.h"
#include <stdio.h>

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
		for (j = 1 ; j <= size - i ; j++)
		{
			printf(" ");
		}

		for (k = size - i ; k >= 1 ; k++)
		{
			printf("#");
		}

		printf("\n");
	}

	if (size <= 0)
	{
		printf("\n");
	}
}
