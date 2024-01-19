#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * string_nconcat - our main function
 * @s1: first param
 * @s2: second param
 * @n: parameter
 * Return: returns characters string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, cnts1 = 0, cnst2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		cnts1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		cnst2++;
	if (n > cnst2)
		ptr = malloc(sizeof(char) * (cnst2 + cnts1 + 1));
	else
		ptr = malloc(sizeof(char) * (n + cnts1 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	if (n > cnst2)
	{
		for (j = 0 ; s2[j] != '\0' ; j++)
			ptr[i + j] = s2[j];
	}
	else
	{
		for (j = 0 ; j < n ; j++)
			ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
