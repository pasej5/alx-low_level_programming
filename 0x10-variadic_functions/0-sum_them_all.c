#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * @...: the rest of the parameters
 *
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i, sum = 0;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);

	return (sum);
}
