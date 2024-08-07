#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 * print_all - main function
 * @format: function param
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *str, *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);

}
