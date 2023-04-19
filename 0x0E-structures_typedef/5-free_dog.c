#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the dog memory
 * @d: structures to be freed
 *
 */

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
