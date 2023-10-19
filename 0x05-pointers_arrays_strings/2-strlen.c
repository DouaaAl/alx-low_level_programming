#include <stdio.h>
#include "main.h"

/**
 * _strlen - Function that gets string length
 * @s: param with string
 * Return: returns number
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;

	return (count);
}
