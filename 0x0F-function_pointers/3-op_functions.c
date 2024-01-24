#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds ints
 * @a: first param
 * @b: second param
 * Return: returns int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub ints
 * @a: first param 
 * @b: second paaram
 * Return: returns ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies ints
 * @a: first param
 * @b: second param
 * Return: returns ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divises ints
 * @a: first param
 * @b: second param
 * Return: return ints
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo rest of int
 * @a: first param
 * @b: second param
 * Return: return ints
 */

int op_mod(int a, int b)
{
	return (a % b);
}
