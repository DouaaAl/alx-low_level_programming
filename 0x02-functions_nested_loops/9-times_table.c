#include "main.h"

/**
 * times_table - prints the 9 table
 * Return: return nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 11 ; i++)
	{
		j = j * 9;

		_putchar(j + '0');
		_putchar('\n');
	}
}
