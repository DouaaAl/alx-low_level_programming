#include <stdio.h>

/**
 * _strlen - Function that gets string length
 * @s: param with string
 * Return: returns number
 */

int _strlen(char *s)
{
	int n;
	int count;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;

	return (count);
}
