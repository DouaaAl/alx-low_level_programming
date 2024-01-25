#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @seperator: first param
 * @n: n param
 * Return: returns integers and seperators
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		x = va_arg(args, int);

		printf("%d", x);
	}
	printf("\n");
	va_end(args);
}
