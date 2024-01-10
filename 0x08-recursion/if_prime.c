#include "main.h"

/**
 * if_prime - main function
 * @n: number checked
 * @curr: current param
 * Returns: returns 0 or 1 depending on the state of the number
 */

int if_prime(int n, int curr)
{
	if (curr == 1)
	{
		if (n == 1)
			return (0);
		return (1);
	}
	if (curr < 1)
		return (0);
	else if ((n % curr == 0))
		return (0);
	return (if_prime(n, curr - 1));
}
