#include "main.h"

/**
 * help_prime - helps find prime number
 * @n: number
 * @currNum: current Number
 * Return: returns int
 */

int help_prime(int n, int currNum)
{
	if (n > 1)
	{
		if (currNum <= 1)
		{
			return (1);
		}
		else
		{
			if ((n % currNum == 0) && (n != currNum))
				return (0);
			else
				return (help_prime(n, currNum - 1));
		}
	}
	else
		return (0);
}
