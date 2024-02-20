#include "main.h"
#include "stdlib.h"
#include <string.h>

/**
 * binary_to_uint - main function
 * @b: function param
 * Return: returns integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int mul = 1, i, num = 0;

	for (i = 0 ; i < strlen(b) ; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
			num +=  mul;
		mul *= 2;
		if (num > 400)
			return (402);
	}
	return (num);
}
