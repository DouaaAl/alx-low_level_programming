#include <stdio.h>

/**
 * main - the main function
 *
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		
		if (i != 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
