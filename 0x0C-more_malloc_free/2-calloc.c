#include "main.h"
#include <stdlib.h>

/**
 * _calloc - main function
 * @nmemb: first param
 * @size: second param
 * Return: return pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (size == 0 || nmemb == 0)
		return (NULL);

	str = calloc(nmemb, size);

	if (str == NULL)
		return (NULL);
	return (str);
}
