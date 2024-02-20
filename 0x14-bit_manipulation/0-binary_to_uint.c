#include "main.h"
#include "stdlib.h"
#include <string.h>
#include "math.h"

/**
 * binary_to_uint - main function
 * @b: function param
 * Return: returns integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1, i;

	if (!b)
		return (0);
	for (i = 0 ; b[i] != '\0' ; i++)
		mul *= 2;

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		mul /= 2;
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
			num = num + mul;
	}
	return (num);
}
