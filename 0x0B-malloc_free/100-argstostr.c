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
	char *str;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			count++;
		count += 1;
	}

	str = malloc(sizeof("char") * (count - 1));

	if (str == NULL)
		return (NULL);

	count = 0;

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			str[count] = av[i][j];
			count++;
		}
		str[count++] = '\n';
	}
	return (str);
}
