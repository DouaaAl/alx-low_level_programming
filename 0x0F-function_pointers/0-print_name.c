#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - function printing
 * @name: name param
 * @f: function param
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
