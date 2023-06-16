#include "main.h"
#include <stdio.h>

/**
 * check -  returns the natural square root of a number
 * @x:number 1
 * @y:number 2
 *
 * Return:square root of a number
 */
int root(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (root(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root(1, n));
}
