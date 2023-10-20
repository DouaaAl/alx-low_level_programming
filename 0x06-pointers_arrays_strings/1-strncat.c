#include "main.h"

/**
 * *_strncat - Our Function
 * @dest: first function Param
 * @src: second function param
 * @n: third function param
 * Return: returns nothing
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src != '\0' ; i++)
	{
		dest[len + i] = *src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
