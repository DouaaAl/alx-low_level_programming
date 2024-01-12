#include "main.h"

/**
 * _islower - check if letter is lowercase
 * @c: parameter to be checked
 * Return: returns 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
