#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number param
 * Return: doesn't return
 */

void print_to_98(int n)
{
	int i;

	for (i = n ; i < 99 ; i++)
	{
		if (i != 98)
			printf("%d ,", i);

		else
			printf("%d", i);
	}
}
