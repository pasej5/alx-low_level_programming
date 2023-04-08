#include "main.h"

/**
 * _abs -  function that computes the absolute value of an integer
 *
 * @m: parameter m because we are not given an argument
 *
 * Return: always 0 on success
 */

int _abs(int m)
{
	if (m < 0)
		m = -(m);
	else if (m >= 0)
		m = m;
	return (m);
}
