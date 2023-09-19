#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 56 ; i++)
	{
		for (j = 49; j < 57 ; j++)
		{
			if (i > j)
			{
				putchar(i);
				putchar(j);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
