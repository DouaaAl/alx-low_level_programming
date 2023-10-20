#include "main.h"

/**
 * *_strncpy - Main function
 * @dest: first function param
 * @src: second function param
 * @n: third function param
 * Return: returns char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
