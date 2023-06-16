#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 *
 * Description: it's what we do with them that's important
 * @m: function parameter
 *
 * Return: Returns the value of lastNum
 */

int print_last_digit(int m)
{
	int lastNum;

		lastNum = m % 10;
	if (lastNum < 0)
	{
		lastNum = lastNum * -1;
	}
	_putchar(lastNum + '0');
	return (lastNum);
}
