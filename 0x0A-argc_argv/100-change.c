#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: first argument
 * @argv: second argument
 * Return: returns 0 or 1
 */

int main(int argc, char *argv[])
{
	int Fn, Sn, FRn, FTn, STn, result, num = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	Fn = (num / 25);
	Sn = ((num % 25) / 10);
	FRn = ((num % 25 % 10) / 5);
	FTn = ((num % 25 % 10 % 5) / 2);
	STn = ((num % 25 % 10 % 5 % 2) / 1);
	result = (Fn + Sn + FRn + FTn + STn);
	printf("%d\n", result);

	return (0);
}
