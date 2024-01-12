#include "main.h"

/**
 * _puts - our main function
 * @str: the string it's going to print
 * Return: returns nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
