#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - string printed
 * @separator: first param
 * @n: number of strings
 * Return: doesn't return anything
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}
	va_end(args);
	printf("\n");
}
