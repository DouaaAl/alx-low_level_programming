#include "main.h"
#include <stdlib.h>

/**
 * str_concat - string function
 * @s1: first param
 * @s2: second param
 * Return: returns NULL or a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, count1 = 0;
	int count2 = 0;
	char *strcn;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		count1 += 1;
	for (i = 0 ; s2[i] != '\0' ; i++)
		count2 += 1;
	strcn = (char *)malloc(sizeof(char) * (count1 + count2 + 1));

	if (strcn == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		strcn[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		strcn[count1 + i] = s2[i];

	strcn[(count1 + count2)] = '\0';
	return (strcn);
}
