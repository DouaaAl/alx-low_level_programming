#include "main.h"
#include "2-strlen_recursion.c"
#include "check_palindrome.c"

/**
 * is_palindrome - palindrome function
 * @s: string paraam
 * Return: return 0 or 1 dependding if function is palindrome
 */

int is_palindrome(char *s)
{
	int stringLength = _strlen_recursion(s);

	return (check_palindrome(s, s + (stringLength - 1), 0));
}
