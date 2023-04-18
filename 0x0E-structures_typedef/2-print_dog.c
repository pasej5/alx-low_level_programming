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
	printf("%s\n", d->name != NULL ? d->name : "nill");

	printf("%f\n", d->age);

	printf("%s\n", d->owner != NULL ? d->owner : "nil");
	return;
}
