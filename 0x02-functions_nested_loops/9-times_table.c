#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 table
 * Return: return nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			printf("%d", i*j);
			
			if (j != 9)
				printf(", ");
		}

		_putchar('\n');

	}
}
