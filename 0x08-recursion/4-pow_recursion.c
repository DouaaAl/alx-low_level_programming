#include "main.h"

/**
 * _pow_recursion - x power of y
 * @x: number
 * @y: power of number
 * Return: return int
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _power_recursion(y - 1));
}
