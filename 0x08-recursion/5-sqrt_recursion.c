#include "main.h"
#include "supportive_function.c"

/**
 * _sqrt_recursion - returns sqrt of number
 * @n: function param
 * Return: returns int
 */

int _sqrt_recursion(int n)
{
	return (supportive_function(n, n));
}
