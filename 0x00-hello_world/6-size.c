#include <stdio.h>

/**
 * main - prints sizes of variables
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("\nSize of an int: %lu byte(s)", sizeof(int));
	printf("\nSize of a long int: %lu byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\nSize of a float: %lu byte(s)", sizeof(float), "\n");
	return (0);
}
