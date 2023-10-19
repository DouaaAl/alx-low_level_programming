#include "main.h"

/**
 * puts2 - our main function
 * @str: function param
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i = i+2)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
