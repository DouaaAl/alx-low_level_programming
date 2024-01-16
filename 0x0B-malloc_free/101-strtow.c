#include "main.h"
#include "stdlib.h"
#include "stdio.h"
#include <string.h>


int wordCount (char *str)
{
	int i, wordCnt = 0;
	(void) str;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if ((str[i] != ' ') && ((str[i + 1] == ' ') || (i == 0)))
			wordCnt++;
	}
	return (wordCnt);
}


/**
 * strtow - main function
 * @str: function param
 * Return: returns double pointer
 */

char **strtow(char *str)
{
	int i = 0, j, letter = 0, position = 0, k = 0;
	char **newstr;

	if ((strcmp(str, ' ') == 0) || (strcmp(str, "") == 0) || (str == NULL))
		return (NULL);

	newstr = malloc(sizeof(char *) * (wordCount(str) + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0 ; i < wordCount(str) ; i++)
	{
		if (i != 0)
			position++;
		letter = 0;
		k = 0;

		for (j = 0 ; str[j] != '\0' ; j++)
		{
			if (str[j + position] != ' ')
			{
				letter++;
				if(str[j + position + 1] == ' ')
					break;
			}
		}

		newstr[i] = malloc(sizeof(char) * (letter + 1));

		if (newstr[i] == NULL)
		{
			for (j = 0 ; j <= wordCount(str) ; j++)
				free(newstr[j]);
			return (NULL);
		}

		for (j = 0 ; str[j] != '\0' ; j++)
		{
			if (str[j + position] != ' ')
			{
				newstr[i][k] = str[position + j];
				k++;
				if(str[j + position + 1] == ' ')
					break;
			}
		}
		for (j = 0 ; str[j] !='\0' ; j++)
		{
			if (str[position] != ' ')
			{
				if (str[position + 1] == ' ')
					break;
			}
			position++;
		}
		newstr[i][k++] = '\0';
	}

	return (newstr);
}
