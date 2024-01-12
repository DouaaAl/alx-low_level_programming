#include "main.h"

/**
 * _atoi - function
 * @s: function param
 * Return: returns 0
 */

int _atoi(char *s)
{
	int i, count = 0;

	for ( i = 0 ; s[i] != '\0' ; i++)
		count += count + i;

	return (count);
}
