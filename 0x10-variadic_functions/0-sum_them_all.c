#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - main function
 * @n: n param
 * Return: returns int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int s = 0, i;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}

	va_end(args);
	return (s);
}
