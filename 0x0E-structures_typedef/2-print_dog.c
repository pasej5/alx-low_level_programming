#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the memory
 *
 * Return: always 0 on success
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
