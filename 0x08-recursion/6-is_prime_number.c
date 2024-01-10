#include "main.h"
#include "if_prime.c"

/**
 * is_prime_number - function that tells you if n is prime
 * @n: function param
 * Return: returns 1 if number is prime otherwise returns 0
 */

int is_prime_number(int n)
{
	return (if_prime(n, n - 1));
}
