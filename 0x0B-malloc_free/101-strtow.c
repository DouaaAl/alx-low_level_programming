#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * strtow - main function
 * @str: function param
 * Return: returns double pointer
 */

char **strtow(char *str)
{
	int i, j, wordCnt = 0, letter = 0, position = 0;
	char **newstr;

	if ((!str) || (str == NULL))
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if ((str[i] != ' ') && ((str[i + 1] == ' ') || (i == 0)))
			wordCnt++;
	}
	printf("%d word count\n", wordCnt);

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
				printf("str[%d + %d] = %c\n", j, position, str[j + position]);
				letter++;
			}
			else if (str[j + position + 1] == ' ')
				continue;
		}

		newstr[i] = malloc(sizeof(char) * (letter + 1));

		if (newstr[i] == NULL)
		{
			for (j = 0 ; j <= wordCnt ; j++)
				free(newstr[j]);
		}
		for (j = 0 ; str[j] != '\0' ; j++)
		{
			if (str[position] != ' ')
			{
				if (str[position + 1] == ' ')
					break;
				newstr[i][j] = str[j];
				position++;
			}
		}
		newstr[i][j] = '\0';
		printf("letter %d count is %d\n", i, letter);
	}

	return (newstr);
}
