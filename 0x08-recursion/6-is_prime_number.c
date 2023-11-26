#include "main.h"
#include "help_prime.c"

/**
 * is_prime_number - function returns 1 if number is prime
 * @n: function param
 * Return: returns int
 */

int is_prime_number(int n)
{
	return (help_prime(n, n));
}
