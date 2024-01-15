#include "main.h"
#include "stdlib.h"

/**
 * create_array - our function
 * @size: the size of the pointer
 * @c: the ccharacter we assigned it to
 * Return: returns NULL or an array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pr;

	if (size == 0)
		return (NULL);
	pr = (char *)malloc(size * sizeof(c));
	for (i = 0 ; i < size ; i++)
	{
		if (c == '\0')
			continue;
		*(pr + i) = c;
	}
	if (!(*pr))
		return (NULL);
	return (pr);
}
