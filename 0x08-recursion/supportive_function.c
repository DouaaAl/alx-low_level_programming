#include "main.h"

/**
 * supportive_function - main function
 * @n: first param
 * @currNum: second param
 * Return: returns int
 */

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
