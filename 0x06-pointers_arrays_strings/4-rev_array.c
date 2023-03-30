#include  "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: integers to be reversed
 * @n: string
 * Return: always 0 on success
 */

void reverse_array(int *a, int n)

{
	int tmp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
	tmp = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = tmp;
	}
}
