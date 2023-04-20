#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function returns sum of a and b
 * @a: First argument number
 * @b: Second argument number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function returns sum of a and b
 * @a: First argument number
 * @b: Second argument number
 * Return: differnce of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function returns sum of a and b
 * @a: First argument number
 * @b: Second argument number
 * Return: product multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function returns sum of a and b
 * @a: First argument number
 * @b: Second argument number
 * Return: product division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function returns sum of a and b
 * @a: First argument number
 * @b: Second argument number
 * Return: remainder of division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
