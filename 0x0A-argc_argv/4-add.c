#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - main function done
 * @argc: first argument
 * @argv: second argument
 * Return: retuens
 */

int main(int argc, char *argv[])
{
	int i, j, count;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[i]);
	}

	printf("%d\n", count);
	return (0);
}
