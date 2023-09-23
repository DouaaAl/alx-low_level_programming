#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @a: number param
 * Return: returns the last digit
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (a < 0)
	{
		b = -b;
	}

	_putchar(b + '0');
	return (b);
}
