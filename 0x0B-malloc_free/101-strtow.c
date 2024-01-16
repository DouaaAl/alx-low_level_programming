#include "main.h"
#include "stdlib.h"

/**
 * strtow - main function
 * @str: function param
 * Return: returns double pointer
 */

char **strtow(char *str)
{
	int i, j, wordCnt = 0, letter = 0, position = 0;
	char **newstr;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if ((str[i] != ' ') && ((str[i - 1] == ' ') || (i == 0)))
			wordCnt++;
	}

	newstr = malloc(sizeof(char *) * (wordCnt + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0 ; i < wordCnt ; i++)
	{
		letter = 0;

		for (j = 0 ; str[j] != '\0' ; j++)
		{
			if (str[j + position] != ' ')
			{
				letter++;
				if ((char)str[j + position + 1] == ' ')
					break;
			}
		}

		newstr[i] = malloc(sizeof(char) * (letter + 1));

		if (newstr[i] == NULL)
		{
			for (j = 0 ; j <= wordCnt ; j++)
				free(newstr[j]);
		}
		for (j = 0 ; str[j] != '\0' ; j++)
		{
			if ((char)str[position] != ' ')
			{
				newstr[i][j] = str[position];
				if (str[position + 1] == ' ')
					break;
			}
			position++;
		}
		newstr[i][j] = '\0';
	}

	return (newstr);
}
