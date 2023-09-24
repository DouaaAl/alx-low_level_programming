#include "main.h"

/**
 * _isdigit - function that checks if c is a digit
 * @c: function param
 * Return: returns 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
		return (1);

	return (0);
}
