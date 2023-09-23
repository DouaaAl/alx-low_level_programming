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
			if (((i * j) < 10) && (((i * j != 0) && i != 0) || (i * j == 0 && j != 0)))
				printf(" ");

			printf("%d", i * j);
			
			if (j != 9)
				printf(", ");
		}

		printf("\n");

	}
}
