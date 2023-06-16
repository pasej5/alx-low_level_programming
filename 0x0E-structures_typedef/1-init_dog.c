#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing dog struct
 * @d: points to the name of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the ownere of the dog
 * Return: always 0 on success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
