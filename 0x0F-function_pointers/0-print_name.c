#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 *
 * @name: given name of what to print
 * @f: pointer to the given function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
