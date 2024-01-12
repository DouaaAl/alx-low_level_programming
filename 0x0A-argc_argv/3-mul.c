#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: first argumment
 * @argv: second argument
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i, count = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1 ; i <= 2 ; i++)
		count *= atoi(argv[i]);

	printf("%d\n", count);
	return (0);
}
