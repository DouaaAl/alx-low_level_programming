#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: function param
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;

	for (i = 0 ; i < count / 2 ; i++)
		char j;

		j = s[i]
		s[i] = s[count - i - 1];
		s[count - i - 1] = j;
}
