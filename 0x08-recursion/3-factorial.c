#include "main.h"

/**
 * factorial - factorial function
 * @n: function param
 * Return: returns int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
