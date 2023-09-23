#include "main.h"

/**
 * _isalpha - checks if c is a character
 * @c: function param
 * Return: returns 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}

	return (0);
}
