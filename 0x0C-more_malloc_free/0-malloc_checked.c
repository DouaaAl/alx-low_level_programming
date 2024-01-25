#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main function
 * @b: function param
 * Return: returnes nothing
 */

void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);

	if (pr == NULL)
	{
		exit(98);
	}

	else
		return (pr);
}