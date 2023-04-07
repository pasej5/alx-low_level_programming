#include "main.h"

/**
 * recursion_loop - Fuction returning one if is prime
 * @input: input number
 * @loop: loop through numbers
 * is_prime_number - function
 * Return: 0ne if prime otherwise 0 on success
 */

int recursion_loop(int input, int loop)
{
	if (loop == input - 1)
	{
	return (1);
	}
	else if (input % loop == 0)
		return (0);
	if (input % loop != 0)
	{
		return (recursion_loop(input, loop + 1));
	}
	return (0);
}

/**
 * is_prime_number - return if prime number
 * @input: input number
 * Retuern:0ne if prime otherwise 0 on success
 */

int is_prime_number(int input)
{
	int loop;

	loop = 2;

	if (input < 2)
	{
	return (0);
	}
	if (input == 2)
	{
	return (1);
	}
	return (recursion_loop(input, loop));
}
