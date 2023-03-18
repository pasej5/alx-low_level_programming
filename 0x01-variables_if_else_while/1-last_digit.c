#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	number = n % 10;
	if (number > 5)
		printf("Last digit of %d is %d greater than 5\n", n, number);
	else if (number == 0)
		printf("Last digit of %d is %d and is zero\n", n, number);
	else if ((number < 6) && (number != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, number);
	return (0);
}
