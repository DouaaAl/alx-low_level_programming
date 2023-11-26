#include "main.h"

/**
 * _sqrt_recursion - returns sqrt of number
 * @n: function param
 * Return: returns int
 */

int _sqrt_recursion(int n)
{
	return (supportive_function(n, n));
}

int supportive_function(int n, int currNum)
{
	if (currNum > 0)
	{
		if ((currNum * currNum) == n)
			return (currNum);
		else
			return (supportive_function(n, currNum - 1));
	}
	else
		return (-1);
}
