#include "main.h"
#include <stdlib.h>

/**
 * _strdup - str function
 * @str: string param
 * Return: returns NULL
 */

char *_strdup(char *str)
{
	int i, count = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		count += 1;
	
	newstr = (char *)malloc(sizeof(char) * (count + 1));

	if (newstr == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		newstr[i] = str[i];	
	return (newstr);
}
