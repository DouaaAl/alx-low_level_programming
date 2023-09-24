#include "main.h"

/**
 * more_numbers - function that prints numbers
 * Return: returnes nothing
 */

void more_numbers(void)
{
	int i;

	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = '0' ; j < '15' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
