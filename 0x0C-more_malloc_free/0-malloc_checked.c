#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main function
 * @b: function param
 * Return: returnes nothing
 */

void *malloc_checked(unsigned int b)
{
	void* *pr = (void *)malloc(b);

	if (pr == NULL)
	{
		exit(0);
	}

	else
		return (pr);
}
