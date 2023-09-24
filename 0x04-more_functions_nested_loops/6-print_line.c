#include "main.h"

/**
 * print_line - function that prints _ n times
 * @n: function param
 * Return: returns nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}
