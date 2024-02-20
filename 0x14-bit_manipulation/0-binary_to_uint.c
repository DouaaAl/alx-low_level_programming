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
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		num = num << 1;
		if (b[i] == '1')
			num +=  1;
	}
	return (num);
}
