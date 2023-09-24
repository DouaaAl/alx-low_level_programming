#include "main.h"

/**
 * _isupper - function that checks if c is uppercase
 * @c: function param
 * Return: returns 1 if c uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if ( c <= 'Z' && c >= 'A' )
		return (1);

	return (0);
}
