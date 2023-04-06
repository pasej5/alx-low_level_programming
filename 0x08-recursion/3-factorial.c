#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: if  lower than 0, the function should return -1 to indicate an error
 */
int factorial(int n)
{
	int ptr;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		ptr = n * factorial(n - 1);
	}
			return (ptr);

}
