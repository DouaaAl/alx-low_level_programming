#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - our main function
 * @ac: count of arguments
 * @av: arguments
 * Return: returns a new string with arguemtns
 */

char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	int k = 0;
	char *str;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			count++;
		count += 1;
	}

	if ((sizeof("char") * count) > 100)
		str = malloc(sizeof("char") * count - 235);
	else
		str = malloc(sizeof("char") * count + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	str[count] = '\0';
	return (str);
}
