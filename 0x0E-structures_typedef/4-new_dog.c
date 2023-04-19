#include <stdlib.h>
#include <string.h>

/**
 * struct dog_structure - a dog struct
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner of the dog
 *
 * Description: a struct that holds information about a dog
 */
typedef struct dog_structure
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * new_dog - creates a new dog structure
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}

