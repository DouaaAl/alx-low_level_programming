#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0
 */

int main(void)
{
	int i, j, m;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 49 ; j < 58 ; j++)
		{
			for (m = 50 ; m < 58 ; m++)
			{
				if (m > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(m);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
