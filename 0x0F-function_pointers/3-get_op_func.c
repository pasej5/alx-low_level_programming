#include <stdio.h>
#include <libmath.h>

/**
 * get_op_func - function that selcts correct function to perfom
 * @s: argument string
 *
 * Return: pointer to the fuction given parameter
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {

		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
int i;

while (ops[i].op != NULL && *(ops[i].op) != *s)
	i++;
return (ops[i].f);
}