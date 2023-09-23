#include "main.h"

/**
 * print_sign: get number sign
 * @n: number
 * Return: returns the sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}

	_putchar(-1);
	return (-1);
}
