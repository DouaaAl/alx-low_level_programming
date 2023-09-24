#include "main.h"

/**
 * print_diagonal - function that prints diagnlos
 * @n: function param
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0; j <= i ; j++)
		{
			if (j == i)
				_putchar('\\');

			else
				_putchar(' ');

		}
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
