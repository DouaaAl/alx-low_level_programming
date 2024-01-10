#include "main.h"

/**
 * _puts_recursion - our function
 * @s: function param that is the string we're printing
 * Return: we're returning nothing
 */

void _puts_recursion(char *s)
{
	if(*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
