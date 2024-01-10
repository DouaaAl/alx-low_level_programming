#include "main.h"

/**
 * check_palindrome - main function
 * @s: string we're checking
 * @Fs: string last digit
 * @n: number helper
 * Return: check if palindrome or not then reurns 0 or 1
 */

int check_palindrome(char *s, char *Fs, int n)
{
	char *sC, *FsC;

	sC = s + n;

	FsC = Fs - n;

	if (*sC != *FsC)
		return (0);
	if (sC == FsC)
		return (1);
	else if (sC == (FsC + 1))
		return (1);
	return (check_palindrome(s, Fs, n + 1));
}
